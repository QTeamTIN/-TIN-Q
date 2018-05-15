// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: _CHANGE.proto

package com.q.prot_packet;

public final class ChangePacket {
  private ChangePacket() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface _CHANGEOrBuilder extends
      // @@protoc_insertion_point(interface_extends:packet._CHANGE)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>required int32 code = 1 [default = 3];</code>
     */
    boolean hasCode();
    /**
     * <code>required int32 code = 1 [default = 3];</code>
     */
    int getCode();

    /**
     * <code>required int32 obiect_id = 2;</code>
     */
    boolean hasObiectId();
    /**
     * <code>required int32 obiect_id = 2;</code>
     */
    int getObiectId();
  }
  /**
   * Protobuf type {@code packet._CHANGE}
   */
  public  static final class _CHANGE extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:packet._CHANGE)
      _CHANGEOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use _CHANGE.newBuilder() to construct.
    private _CHANGE(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private _CHANGE() {
      code_ = 3;
      obiectId_ = 0;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private _CHANGE(
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
              obiectId_ = input.readInt32();
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
      return com.q.prot_packet.ChangePacket.internal_static_packet__CHANGE_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return com.q.prot_packet.ChangePacket.internal_static_packet__CHANGE_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              com.q.prot_packet.ChangePacket._CHANGE.class, com.q.prot_packet.ChangePacket._CHANGE.Builder.class);
    }

    private int bitField0_;
    public static final int CODE_FIELD_NUMBER = 1;
    private int code_;
    /**
     * <code>required int32 code = 1 [default = 3];</code>
     */
    public boolean hasCode() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required int32 code = 1 [default = 3];</code>
     */
    public int getCode() {
      return code_;
    }

    public static final int OBIECT_ID_FIELD_NUMBER = 2;
    private int obiectId_;
    /**
     * <code>required int32 obiect_id = 2;</code>
     */
    public boolean hasObiectId() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>required int32 obiect_id = 2;</code>
     */
    public int getObiectId() {
      return obiectId_;
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
      if (!hasObiectId()) {
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
        output.writeInt32(2, obiectId_);
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
          .computeInt32Size(2, obiectId_);
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
      if (!(obj instanceof com.q.prot_packet.ChangePacket._CHANGE)) {
        return super.equals(obj);
      }
      com.q.prot_packet.ChangePacket._CHANGE other = (com.q.prot_packet.ChangePacket._CHANGE) obj;

      boolean result = true;
      result = result && (hasCode() == other.hasCode());
      if (hasCode()) {
        result = result && (getCode()
            == other.getCode());
      }
      result = result && (hasObiectId() == other.hasObiectId());
      if (hasObiectId()) {
        result = result && (getObiectId()
            == other.getObiectId());
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
      if (hasObiectId()) {
        hash = (37 * hash) + OBIECT_ID_FIELD_NUMBER;
        hash = (53 * hash) + getObiectId();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static com.q.prot_packet.ChangePacket._CHANGE parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.q.prot_packet.ChangePacket._CHANGE parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.q.prot_packet.ChangePacket._CHANGE parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.q.prot_packet.ChangePacket._CHANGE parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.q.prot_packet.ChangePacket._CHANGE parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.q.prot_packet.ChangePacket._CHANGE parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.q.prot_packet.ChangePacket._CHANGE parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static com.q.prot_packet.ChangePacket._CHANGE parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static com.q.prot_packet.ChangePacket._CHANGE parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static com.q.prot_packet.ChangePacket._CHANGE parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static com.q.prot_packet.ChangePacket._CHANGE parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static com.q.prot_packet.ChangePacket._CHANGE parseFrom(
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
    public static Builder newBuilder(com.q.prot_packet.ChangePacket._CHANGE prototype) {
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
     * Protobuf type {@code packet._CHANGE}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:packet._CHANGE)
        com.q.prot_packet.ChangePacket._CHANGEOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return com.q.prot_packet.ChangePacket.internal_static_packet__CHANGE_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return com.q.prot_packet.ChangePacket.internal_static_packet__CHANGE_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                com.q.prot_packet.ChangePacket._CHANGE.class, com.q.prot_packet.ChangePacket._CHANGE.Builder.class);
      }

      // Construct using com.q.prot_packet.ChangePacket._CHANGE.newBuilder()
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
        code_ = 3;
        bitField0_ = (bitField0_ & ~0x00000001);
        obiectId_ = 0;
        bitField0_ = (bitField0_ & ~0x00000002);
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return com.q.prot_packet.ChangePacket.internal_static_packet__CHANGE_descriptor;
      }

      public com.q.prot_packet.ChangePacket._CHANGE getDefaultInstanceForType() {
        return com.q.prot_packet.ChangePacket._CHANGE.getDefaultInstance();
      }

      public com.q.prot_packet.ChangePacket._CHANGE build() {
        com.q.prot_packet.ChangePacket._CHANGE result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public com.q.prot_packet.ChangePacket._CHANGE buildPartial() {
        com.q.prot_packet.ChangePacket._CHANGE result = new com.q.prot_packet.ChangePacket._CHANGE(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.code_ = code_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.obiectId_ = obiectId_;
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
        if (other instanceof com.q.prot_packet.ChangePacket._CHANGE) {
          return mergeFrom((com.q.prot_packet.ChangePacket._CHANGE)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(com.q.prot_packet.ChangePacket._CHANGE other) {
        if (other == com.q.prot_packet.ChangePacket._CHANGE.getDefaultInstance()) return this;
        if (other.hasCode()) {
          setCode(other.getCode());
        }
        if (other.hasObiectId()) {
          setObiectId(other.getObiectId());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        if (!hasCode()) {
          return false;
        }
        if (!hasObiectId()) {
          return false;
        }
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.q.prot_packet.ChangePacket._CHANGE parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.q.prot_packet.ChangePacket._CHANGE) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private int code_ = 3;
      /**
       * <code>required int32 code = 1 [default = 3];</code>
       */
      public boolean hasCode() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      /**
       * <code>required int32 code = 1 [default = 3];</code>
       */
      public int getCode() {
        return code_;
      }
      /**
       * <code>required int32 code = 1 [default = 3];</code>
       */
      public Builder setCode(int value) {
        bitField0_ |= 0x00000001;
        code_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>required int32 code = 1 [default = 3];</code>
       */
      public Builder clearCode() {
        bitField0_ = (bitField0_ & ~0x00000001);
        code_ = 3;
        onChanged();
        return this;
      }

      private int obiectId_ ;
      /**
       * <code>required int32 obiect_id = 2;</code>
       */
      public boolean hasObiectId() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>required int32 obiect_id = 2;</code>
       */
      public int getObiectId() {
        return obiectId_;
      }
      /**
       * <code>required int32 obiect_id = 2;</code>
       */
      public Builder setObiectId(int value) {
        bitField0_ |= 0x00000002;
        obiectId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>required int32 obiect_id = 2;</code>
       */
      public Builder clearObiectId() {
        bitField0_ = (bitField0_ & ~0x00000002);
        obiectId_ = 0;
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


      // @@protoc_insertion_point(builder_scope:packet._CHANGE)
    }

    // @@protoc_insertion_point(class_scope:packet._CHANGE)
    private static final com.q.prot_packet.ChangePacket._CHANGE DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new com.q.prot_packet.ChangePacket._CHANGE();
    }

    public static com.q.prot_packet.ChangePacket._CHANGE getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    @java.lang.Deprecated public static final com.google.protobuf.Parser<_CHANGE>
        PARSER = new com.google.protobuf.AbstractParser<_CHANGE>() {
      public _CHANGE parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new _CHANGE(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<_CHANGE> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<_CHANGE> getParserForType() {
      return PARSER;
    }

    public com.q.prot_packet.ChangePacket._CHANGE getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_packet__CHANGE_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_packet__CHANGE_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\r_CHANGE.proto\022\006packet\"-\n\007_CHANGE\022\017\n\004co" +
      "de\030\001 \002(\005:\0013\022\021\n\tobiect_id\030\002 \002(\005B!\n\021com.q." +
      "prot_packetB\014ChangePacket"
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
    internal_static_packet__CHANGE_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_packet__CHANGE_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_packet__CHANGE_descriptor,
        new java.lang.String[] { "Code", "ObiectId", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
