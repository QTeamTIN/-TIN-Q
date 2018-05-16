// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: _OPERATION.proto

package com.q.prot_packet;

public final class OperationPacket {
  private OperationPacket() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface _OPEARATIONOrBuilder extends
      // @@protoc_insertion_point(interface_extends:packet._OPEARATION)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>required int32 code = 1 [default = 2];</code>
     */
    boolean hasCode();
    /**
     * <code>required int32 code = 1 [default = 2];</code>
     */
    int getCode();

    /**
     * <code>required int32 session_id = 2;</code>
     */
    boolean hasSessionId();
    /**
     * <code>required int32 session_id = 2;</code>
     */
    int getSessionId();

    /**
     * <code>optional int32 operation_description = 3;</code>
     */
    boolean hasOperationDescription();
    /**
     * <code>optional int32 operation_description = 3;</code>
     */
    int getOperationDescription();

    /**
     * <code>optional int32 operational_local_id = 4;</code>
     */
    boolean hasOperationalLocalId();
    /**
     * <code>optional int32 operational_local_id = 4;</code>
     */
    int getOperationalLocalId();
  }
  /**
   * Protobuf type {@code packet._OPEARATION}
   */
  public  static final class _OPEARATION extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:packet._OPEARATION)
      _OPEARATIONOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use _OPEARATION.newBuilder() to construct.
    private _OPEARATION(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private _OPEARATION() {
      code_ = 2;
      sessionId_ = 0;
      operationDescription_ = 0;
      operationalLocalId_ = 0;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private _OPEARATION(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownField(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {
              bitField0_ |= 0x00000001;
              code_ = input.readInt32();
              break;
            }
            case 16: {
              bitField0_ |= 0x00000002;
              sessionId_ = input.readInt32();
              break;
            }
            case 24: {
              bitField0_ |= 0x00000004;
              operationDescription_ = input.readInt32();
              break;
            }
            case 32: {
              bitField0_ |= 0x00000008;
              operationalLocalId_ = input.readInt32();
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return com.q.prot_packet.OperationPacket.internal_static_packet__OPEARATION_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return com.q.prot_packet.OperationPacket.internal_static_packet__OPEARATION_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              com.q.prot_packet.OperationPacket._OPEARATION.class, com.q.prot_packet.OperationPacket._OPEARATION.Builder.class);
    }

    private int bitField0_;
    public static final int CODE_FIELD_NUMBER = 1;
    private int code_;
    /**
     * <code>required int32 code = 1 [default = 2];</code>
     */
    public boolean hasCode() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required int32 code = 1 [default = 2];</code>
     */
    public int getCode() {
      return code_;
    }

    public static final int SESSION_ID_FIELD_NUMBER = 2;
    private int sessionId_;
    /**
     * <code>required int32 session_id = 2;</code>
     */
    public boolean hasSessionId() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required int32 session_id = 2;</code>
     */
    public int getSessionId() {
      return sessionId_;
    }

    public static final int OPERATION_DESCRIPTION_FIELD_NUMBER = 3;
    private int operationDescription_;
    /**
     * <code>optional int32 operation_description = 3;</code>
     */
    public boolean hasOperationDescription() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>optional int32 operation_description = 3;</code>
     */
    public int getOperationDescription() {
      return operationDescription_;
    }

    public static final int OPERATIONAL_LOCAL_ID_FIELD_NUMBER = 4;
    private int operationalLocalId_;
    /**
     * <code>optional int32 operational_local_id = 4;</code>
     */
    public boolean hasOperationalLocalId() {
      return ((bitField0_ & 0x00000008) == 0x00000008);
    }
    /**
     * <code>optional int32 operational_local_id = 4;</code>
     */
    public int getOperationalLocalId() {
      return operationalLocalId_;
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      if (!hasCode()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasSessionId()) {
        memoizedIsInitialized = 0;
        return false;
      }
      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        output.writeInt32(1, code_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        output.writeInt32(2, sessionId_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeInt32(3, operationDescription_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        output.writeInt32(4, operationalLocalId_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt32Size(1, code_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt32Size(2, sessionId_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt32Size(3, operationDescription_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt32Size(4, operationalLocalId_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof com.q.prot_packet.OperationPacket._OPEARATION)) {
        return super.equals(obj);
      }
      com.q.prot_packet.OperationPacket._OPEARATION other = (com.q.prot_packet.OperationPacket._OPEARATION) obj;

      boolean result = true;
      result = result && (hasCode() == other.hasCode());
      if (hasCode()) {
        result = result && (getCode()
            == other.getCode());
      }
      result = result && (hasSessionId() == other.hasSessionId());
      if (hasSessionId()) {
        result = result && (getSessionId()
            == other.getSessionId());
      }
      result = result && (hasOperationDescription() == other.hasOperationDescription());
      if (hasOperationDescription()) {
        result = result && (getOperationDescription()
            == other.getOperationDescription());
      }
      result = result && (hasOperationalLocalId() == other.hasOperationalLocalId());
      if (hasOperationalLocalId()) {
        result = result && (getOperationalLocalId()
            == other.getOperationalLocalId());
      }
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      if (hasCode()) {
        hash = (37 * hash) + CODE_FIELD_NUMBER;
        hash = (53 * hash) + getCode();
      }
      if (hasSessionId()) {
        hash = (37 * hash) + SESSION_ID_FIELD_NUMBER;
        hash = (53 * hash) + getSessionId();
      }
      if (hasOperationDescription()) {
        hash = (37 * hash) + OPERATION_DESCRIPTION_FIELD_NUMBER;
        hash = (53 * hash) + getOperationDescription();
      }
      if (hasOperationalLocalId()) {
        hash = (37 * hash) + OPERATIONAL_LOCAL_ID_FIELD_NUMBER;
        hash = (53 * hash) + getOperationalLocalId();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static com.q.prot_packet.OperationPacket._OPEARATION parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.q.prot_packet.OperationPacket._OPEARATION parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.q.prot_packet.OperationPacket._OPEARATION parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.q.prot_packet.OperationPacket._OPEARATION parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.q.prot_packet.OperationPacket._OPEARATION parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.q.prot_packet.OperationPacket._OPEARATION parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.q.prot_packet.OperationPacket._OPEARATION parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static com.q.prot_packet.OperationPacket._OPEARATION parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static com.q.prot_packet.OperationPacket._OPEARATION parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static com.q.prot_packet.OperationPacket._OPEARATION parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static com.q.prot_packet.OperationPacket._OPEARATION parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static com.q.prot_packet.OperationPacket._OPEARATION parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(com.q.prot_packet.OperationPacket._OPEARATION prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code packet._OPEARATION}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:packet._OPEARATION)
        com.q.prot_packet.OperationPacket._OPEARATIONOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return com.q.prot_packet.OperationPacket.internal_static_packet__OPEARATION_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return com.q.prot_packet.OperationPacket.internal_static_packet__OPEARATION_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                com.q.prot_packet.OperationPacket._OPEARATION.class, com.q.prot_packet.OperationPacket._OPEARATION.Builder.class);
      }

      // Construct using com.q.prot_packet.OperationPacket._OPEARATION.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        code_ = 2;
        bitField0_ = (bitField0_ & ~0x00000001);
        sessionId_ = 0;
        bitField0_ = (bitField0_ & ~0x00000002);
        operationDescription_ = 0;
        bitField0_ = (bitField0_ & ~0x00000004);
        operationalLocalId_ = 0;
        bitField0_ = (bitField0_ & ~0x00000008);
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return com.q.prot_packet.OperationPacket.internal_static_packet__OPEARATION_descriptor;
      }

      public com.q.prot_packet.OperationPacket._OPEARATION getDefaultInstanceForType() {
        return com.q.prot_packet.OperationPacket._OPEARATION.getDefaultInstance();
      }

      public com.q.prot_packet.OperationPacket._OPEARATION build() {
        com.q.prot_packet.OperationPacket._OPEARATION result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.q.prot_packet.OperationPacket._OPEARATION buildPartial() {
        com.q.prot_packet.OperationPacket._OPEARATION result = new com.q.prot_packet.OperationPacket._OPEARATION(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.code_ = code_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.sessionId_ = sessionId_;
        if (((from_bitField0_ & 0x00000004) == 0x00000004)) {
          to_bitField0_ |= 0x00000004;
        }
        result.operationDescription_ = operationDescription_;
        if (((from_bitField0_ & 0x00000008) == 0x00000008)) {
          to_bitField0_ |= 0x00000008;
        }
        result.operationalLocalId_ = operationalLocalId_;
        result.bitField0_ = to_bitField0_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof com.q.prot_packet.OperationPacket._OPEARATION) {
          return mergeFrom((com.q.prot_packet.OperationPacket._OPEARATION)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(com.q.prot_packet.OperationPacket._OPEARATION other) {
        if (other == com.q.prot_packet.OperationPacket._OPEARATION.getDefaultInstance()) return this;
        if (other.hasCode()) {
          setCode(other.getCode());
        }
        if (other.hasSessionId()) {
          setSessionId(other.getSessionId());
        }
        if (other.hasOperationDescription()) {
          setOperationDescription(other.getOperationDescription());
        }
        if (other.hasOperationalLocalId()) {
          setOperationalLocalId(other.getOperationalLocalId());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        if (!hasCode()) {
          return false;
        }
        if (!hasSessionId()) {
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.q.prot_packet.OperationPacket._OPEARATION parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.q.prot_packet.OperationPacket._OPEARATION) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private int code_ = 2;
      /**
       * <code>required int32 code = 1 [default = 2];</code>
       */
      public boolean hasCode() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      /**
       * <code>required int32 code = 1 [default = 2];</code>
       */
      public int getCode() {
        return code_;
      }
      /**
       * <code>required int32 code = 1 [default = 2];</code>
       */
      public Builder setCode(int value) {
        bitField0_ |= 0x00000001;
        code_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>required int32 code = 1 [default = 2];</code>
       */
      public Builder clearCode() {
        bitField0_ = (bitField0_ & ~0x00000001);
        code_ = 2;
        onChanged();
        return this;
      }

      private int sessionId_ ;
      /**
       * <code>required int32 session_id = 2;</code>
       */
      public boolean hasSessionId() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required int32 session_id = 2;</code>
       */
      public int getSessionId() {
        return sessionId_;
      }
      /**
       * <code>required int32 session_id = 2;</code>
       */
      public Builder setSessionId(int value) {
        bitField0_ |= 0x00000002;
        sessionId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>required int32 session_id = 2;</code>
       */
      public Builder clearSessionId() {
        bitField0_ = (bitField0_ & ~0x00000002);
        sessionId_ = 0;
        onChanged();
        return this;
      }

      private int operationDescription_ ;
      /**
       * <code>optional int32 operation_description = 3;</code>
       */
      public boolean hasOperationDescription() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>optional int32 operation_description = 3;</code>
       */
      public int getOperationDescription() {
        return operationDescription_;
      }
      /**
       * <code>optional int32 operation_description = 3;</code>
       */
      public Builder setOperationDescription(int value) {
        bitField0_ |= 0x00000004;
        operationDescription_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>optional int32 operation_description = 3;</code>
       */
      public Builder clearOperationDescription() {
        bitField0_ = (bitField0_ & ~0x00000004);
        operationDescription_ = 0;
        onChanged();
        return this;
      }

      private int operationalLocalId_ ;
      /**
       * <code>optional int32 operational_local_id = 4;</code>
       */
      public boolean hasOperationalLocalId() {
        return ((bitField0_ & 0x00000008) == 0x00000008);
      }
      /**
       * <code>optional int32 operational_local_id = 4;</code>
       */
      public int getOperationalLocalId() {
        return operationalLocalId_;
      }
      /**
       * <code>optional int32 operational_local_id = 4;</code>
       */
      public Builder setOperationalLocalId(int value) {
        bitField0_ |= 0x00000008;
        operationalLocalId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>optional int32 operational_local_id = 4;</code>
       */
      public Builder clearOperationalLocalId() {
        bitField0_ = (bitField0_ & ~0x00000008);
        operationalLocalId_ = 0;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFields(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:packet._OPEARATION)
    }

    // @@protoc_insertion_point(class_scope:packet._OPEARATION)
    private static final com.q.prot_packet.OperationPacket._OPEARATION DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new com.q.prot_packet.OperationPacket._OPEARATION();
    }

    public static com.q.prot_packet.OperationPacket._OPEARATION getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    @java.lang.Deprecated public static final com.google.protobuf.Parser<_OPEARATION>
        PARSER = new com.google.protobuf.AbstractParser<_OPEARATION>() {
      public _OPEARATION parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new _OPEARATION(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<_OPEARATION> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<_OPEARATION> getParserForType() {
      return PARSER;
    }

    public com.q.prot_packet.OperationPacket._OPEARATION getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_packet__OPEARATION_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_packet__OPEARATION_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\020_OPERATION.proto\022\006packet\"o\n\013_OPEARATIO" +
      "N\022\017\n\004code\030\001 \002(\005:\0012\022\022\n\nsession_id\030\002 \002(\005\022\035" +
      "\n\025operation_description\030\003 \001(\005\022\034\n\024operati" +
      "onal_local_id\030\004 \001(\005B$\n\021com.q.prot_packet" +
      "B\017OperationPacket"
    };
    com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner assigner =
        new com.google.protobuf.Descriptors.FileDescriptor.    InternalDescriptorAssigner() {
          public com.google.protobuf.ExtensionRegistry assignDescriptors(
              com.google.protobuf.Descriptors.FileDescriptor root) {
            descriptor = root;
            return null;
          }
        };
    com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        }, assigner);
    internal_static_packet__OPEARATION_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_packet__OPEARATION_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_packet__OPEARATION_descriptor,
        new java.lang.String[] { "Code", "SessionId", "OperationDescription", "OperationalLocalId", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
