#define ERR_INTERNAL                                       0
#define ERR_MAX_LEX_DEPTH                                  1
#define ERR_OUT_OF_MEMORY                                  2
#define ERR_LEX_UNEXPECTED_CHAR                            3
#define ERR_OTHER_ERROR                                    4
#define ERR_ILLEGAL_KEYWORD                                5
#define ERR_ID_ENDS_IN_HYPHEN                              6
#define ERR_LEADING_ZEROS                                  7
#define ERR_NUMBER_TOO_LARGE                               8
#define ERR_MODULENAME_64                                  9
#define ERR_MODULENAME_32                                  10
#define ERR_TYPENAME_64                                    11
#define ERR_TYPENAME_32                                    12
#define ERR_OIDNAME_64                                     13
#define ERR_OIDNAME_32                                     14
#define ERR_ENUMNAME_64                                    15
#define ERR_ENUMNAME_32                                    16
#define ERR_BITNAME_64                                     17
#define ERR_BITNAME_32                                     18
#define ERR_UCIDENTIFIER_64                                19
#define ERR_LCIDENTIFIER_64                                20
#define ERR_TRAP_TYPE                                      21
#define ERR_TOO_MANY_MODULE_IDENTITIES                     22
#define ERR_NO_MODULE_IDENTITY                             23
#define ERR_OID_DEFVAL_TOO_LONG_SMIV2                      24
#define ERR_OID_DEFVAL_TOO_LONG_SMIV1                      25
#define ERR_INVALID_SMIV1_ACCESS                           26
#define ERR_INVALID_SMIV2_ACCESS                           27
#define ERR_SMIV2_WRITE_ONLY                               28
#define ERR_SMIV1_WRITE_ONLY                               29
#define ERR_INVALID_NOTIFICATION_VARIATION_ACCESS          30
#define ERR_INVALID_VARIATION_ACCESS                       31
#define ERR_NOTIFICATION_VARIATION_SYNTAX                  32
#define ERR_NOTIFICATION_VARIATION_WRITESYNTAX             33
#define ERR_DEFVAL_SYNTAX                                  34
#define ERR_NOTIFICATION_VARIATION_DEFVAL                  35
#define ERR_NOTIFICATION_VARIATION_CREATION                36
#define ERR_MODULE_IDENTITY_NOT_FIRST                      37
#define ERR_INVALID_SMIV1_STATUS                           38
#define ERR_INVALID_SMIV2_STATUS                           39
#define ERR_INVALID_CAPABILITIES_STATUS                    40
#define ERR_OIDNAME_INCLUDES_HYPHEN                        41
#define ERR_ILLEGAL_CHAR_IN_STRING                         42
#define ERR_BIN_STRING_MUL8                                43
#define ERR_HEX_STRING_MUL2                                44
#define ERR_FLUSH_DECLARATION                              45
#define ERR_MAX_ACCESS_IN_SMIV1                            46
#define ERR_ACCESS_IN_SMIV2                                47
#define ERR_MODULE_NOT_FOUND                               48
#define ERR_IMPORT_NOT_FOUND                               49
#define ERR_OPENING_INPUTFILE                              50
#define ERR_ILLEGAL_INPUTFILE                              51
#define ERR_UNKNOWN_OIDLABEL                               52
#define ERR_OIDLABEL_CHANGED                               53
#define ERR_IDENTIFIER_OID_CHANGED                         54
#define ERR_EXISTENT_OBJECT                                55
#define ERR_IDENTIFIER_NOT_IN_MODULE                       56
#define ERR_MACRO                                          57
#define ERR_CHOICE                                         58
#define ERR_TYPE_SMI_OR_SPPI                               59
#define ERR_TYPE_SPPI                                      60
#define ERR_TYPE_TAG                                       61
#define ERR_EXPORTS                                        62
#define ERR_ILLEGALLY_QUALIFIED                            63
#define ERR_REDEFINED_DESCRIPTION                          64
#define ERR_REDEFINED_PREFIX                               65
#define ERR_REDEFINED_REFERENCE                            66
#define ERR_MISSING_DESCRIPTION                            67
#define ERR_OIDLABEL_NOT_FIRST                             68
#define ERR_UNKNOWN_TYPE                                   69
#define ERR_UNKNOWN_CLASS                                  70
#define ERR_UNKNOWN_TYPE_OR_CLASS                          71
#define ERR_ATTRIBUTE_CLASS_ACCESS                         72
#define ERR_ATTRIBUTE_MISSING_ACCESS                       73
#define ERR_ATTRIBUTE_CLASS_DEFAULT                        74
#define ERR_ATTRIBUTE_CLASS_FORMAT                         75
#define ERR_ATTRIBUTE_CLASS_UNITS                          76
#define ERR_NO_SUCH_UNIQUE_LEAF                            77
#define ERR_NO_SUCH_KEY_LEAF                               78
#define ERR_DUPLICATE_TYPE_NAME                            79
#define ERR_ATTRIBUTE_NOT_FOUND                            80
#define ERR_DUPLICATE_ATTRIBUTE_NAME                       81
#define ERR_DUPLICATE_CLASS_NAME                           82
#define ERR_ILLEGAL_RANGE_FOR_COUNTER                      83
#define ERR_ILLEGAL_RANGE_FOR_PARENT_TYPE                  84
#define ERR_ILLEGAL_SIZE_FOR_PARENT_TYPE                   85
#define ERR_ILLEGAL_ENUM_FOR_PARENT_TYPE                   86
#define ERR_SMIV2_SIGNED_NUMBER_RANGE                      87
#define ERR_SMIV2_UNSIGNED_NUMBER_RANGE                    88
#define ERR_INTEGER32_TOO_LARGE                            89
#define ERR_UNEXPECTED_VALUETYPE                           90
#define ERR_FLOAT_OVERFLOW                                 91
#define ERR_SMI_NOT_SUPPORTED                              92
#define ERR_SMING_NOT_SUPPORTED                            93
#define ERR_YANG_NOT_SUPPORTED                             94
#define ERR_UNUSED_IMPORT                                  95
#define ERR_MACRO_NOT_IMPORTED                             96
#define ERR_IMPLICIT_NODE                                  97
#define ERR_SCALAR_READCREATE                              98
#define ERR_NAMEDNUMBER_INCLUDES_HYPHEN                    99
#define ERR_NAMEDBIT_INCLUDES_HYPHEN                       100
#define ERR_REDEFINITION                                   101
#define ERR_EXT_REDEFINITION                               102
#define ERR_CASE_REDEFINITION                              103
#define ERR_EXT_CASE_REDEFINITION                          104
#define ERR_BASETYPE_REDEFINITION                          105
#define ERR_PREVIOUS_DEFINITION                            106
#define ERR_INVALID_FORMAT                                 107
#define ERR_REFINEMENT_ALREADY_EXISTS                      108
#define ERR_OPTIONALGROUP_ALREADY_EXISTS                   109
#define ERR_UNEXPECTED_TYPE_RESTRICTION                    110
#define ERR_UNKNOWN_CONFIG_CMD                             111
#define ERR_CACHE_CONFIG_NOT_SUPPORTED                     112
#define ERR_SMIV2_OPAQUE_OBSOLETE                          113
#define ERR_SPPI_OPAQUE_OBSOLETE                           114
#define ERR_DATE_CHARACTER                                 115
#define ERR_DATE_LENGTH                                    116
#define ERR_DATE_VALUE                                     117
#define ERR_DATE_YEAR_2DIGITS                              118
#define ERR_DATE_YEAR                                      119
#define ERR_DATE_MONTH                                     120
#define ERR_DATE_DAY                                       121
#define ERR_DATE_HOUR                                      122
#define ERR_DATE_MINUTES                                   123
#define ERR_DATE_IN_FUTURE                                 124
#define ERR_DATE_IN_PAST                                   125
#define ERR_REVISION_NOT_DESCENDING                        126
#define ERR_REVISION_MISSING                               127
#define ERR_REVISION_AFTER_LAST_UPDATE                     128
#define ERR_INTEGER_IN_SMIV2                               129
#define ERR_MODULE_ALREADY_LOADED                          130
#define ERR_IDENTITY_PARENT_NOT_FOUND                      131
#define ERR_SMIV2_BASETYPE_NOT_IMPORTED                    132
#define ERR_BASETYPE_UNKNOWN                               133
#define ERR_ROW_SUBID_ONE                                  134
#define ERR_ROWNAME_ENTRY                                  135
#define ERR_TABLENAME_TABLE                                136
#define ERR_ROWNAME_TABLENAME                              137
#define ERR_SMIV2_TYPE_ASSIGNEMENT                         138
#define ERR_ILLEGAL_IMPORT                                 139
#define ERR_SMIV2_NESTED_TEXTUAL_CONVENTION                140
#define ERR_TABLE_ACCESS                                   141
#define ERR_ROW_ACCESS                                     142
#define ERR_COUNTER_ACCESS                                 143
#define ERR_ENUM_SUBTYPE_OF                                144
#define ERR_BITS_SUBTYPE_OF                                145
#define ERR_ENUM_SUBTYPE                                   146
#define ERR_BITS_SUBTYPE                                   147
#define ERR_ENUM_NAME_REDEFINITION                         148
#define ERR_ENUM_NUMBER_REDEFINITION                       149
#define ERR_ENUM_NAME_NOT_DEFINED                          150
#define ERR_ENUM_ZERO                                      151
#define ERR_BITS_NAME_REDEFINITION                         152
#define ERR_BITS_NUMBER_REDEFINITION                       153
#define ERR_BITS_NUMBER_NEGATIVE                           154
#define ERR_BITS_NUMBER_TOO_LARGE                          155
#define ERR_BITS_NUMBER_LARGE                              156
#define ERR_BITS_ZERO_NOT_NAMED                            157
#define ERR_RANGE_OUT_OF_BASETYPE                          158
#define ERR_RANGE_OVERLAP                                  159
#define ERR_RANGES_NOT_ASCENDING                           160
#define ERR_NAMED_NUMBERS_NOT_ASCENDING                    161
#define ERR_EXCHANGED_RANGE_LIMITS                         162
#define ERR_INDEX_BASETYPE                                 163
#define ERR_INDEX_TOO_LARGE                                164
#define ERR_INDEX_NO_RANGE                                 165
#define ERR_INDEX_NO_RANGE_MOD                             166
#define ERR_INDEX_STRING_NO_SIZE                           167
#define ERR_INDEX_STRING_NO_SIZE_MOD                       168
#define ERR_INDEX_OID_NO_SIZE                              169
#define ERR_INDEX_OID_NO_SIZE_MOD                          170
#define ERR_INDEX_RANGE_NEGATIVE                           171
#define ERR_INDEX_ENUM_NEGATIVE                            172
#define ERR_INDEX_NOT_COLUMN                               173
#define ERR_AUGMENT_NESTED                                 174
#define ERR_AUGMENT_NO_ROW                                 175
#define ERR_NODE_NOT_IN_GROUP                              176
#define ERR_NOTIFICATION_NOT_IN_GROUP                      177
#define ERR_INVALID_GROUP_MEMBER                           178
#define ERR_MIXED_GROUP_MEMBERS                            179
#define ERR_BAD_LOWER_IDENTIFIER_CASE                      180
#define ERR_UNDERSCORE_IN_IDENTIFIER                       181
#define ERR_OID_REUSE                                      182
#define ERR_OID_REGISTERED                                 183
#define ERR_OID_RECURSIVE                                  184
#define ERR_COMMENT_TERMINATES                             185
#define ERR_OBSOLETE_IMPORT                                186
#define ERR_GROUP_OBJECT_STATUS                            187
#define ERR_COMPLIANCE_GROUP_STATUS                        188
#define ERR_COMPLIANCE_OBJECT_STATUS                       189
#define ERR_COMPLIANCE_GROUP_INVALID                       190
#define ERR_GROUP_UNREF                                    191
#define ERR_TYPE_UNREF                                     192
#define ERR_SEQUENCE_ORDER                                 193
#define ERR_SEQUENCE_NO_COLUMN                             194
#define ERR_SEQUENCE_MISSING_COLUMN                        195
#define ERR_ILLEGAL_ROWSTATUS_DEFAULT                      196
#define ERR_ILLEGAL_ROWSTATUS_ACCESS                       197
#define ERR_ILLEGAL_STORAGETYPE_DEFAULT                    198
#define ERR_DEFVAL_OUT_OF_BASETYPE                         199
#define ERR_DEFVAL_OUT_OF_RANGE                            200
#define ERR_DEFVAL_OUT_OF_ENUM                             201
#define ERR_TADDRESS_WITHOUT_TDOMAIN                       202
#define ERR_INETADDRESS_WITHOUT_TYPE                       203
#define ERR_INETADDRESSTYPE_SUBTYPED                       204
#define ERR_INETADDRESS_SPECIFIC                           205
#define ERR_TRANSPORTADDRESS_WITHOUT_TYPE                  206
#define ERR_TRANSPORTADDRESSTYPE_SUBTYPED                  207
#define ERR_TRANSPORTADDRESS_SPECIFIC                      208
#define ERR_NOTIFICATION_OBJECT_TYPE                       209
#define ERR_NOTIFICATION_OBJECT_ACCESS                     210
#define ERR_NOTIFICATION_OBJECT_MIX                        211
#define ERR_EMPTY_DESCRIPTION                              212
#define ERR_EMPTY_REFERENCE                                213
#define ERR_EMPTY_ORGANIZATION                             214
#define ERR_EMPTY_CONTACT                                  215
#define ERR_EMPTY_FORMAT                                   216
#define ERR_EMPTY_UNITS                                    217
#define ERR_INDEX_DEFVAL                                   218
#define ERR_SEQUENCE_TYPE_MISMATCH                         219
#define ERR_INDEX_ACCESSIBLE                               220
#define ERR_INDEX_NON_ACCESSIBLE                           221
#define ERR_REFINEMENT_NOT_LISTED                          222
#define ERR_NOTIFICATION_NOT_REVERSIBLE                    223
#define ERR_NOTIFICATION_ID_TOO_LARGE                      224
#define ERR_NODE_PARENT_TYPE                               225
#define ERR_SCALAR_PARENT_TYPE                             226
#define ERR_TABLE_PARENT_TYPE                              227
#define ERR_TABLE_ROW_TYPE_MISMATCH                        228
#define ERR_ROW_PARENT_TYPE                                229
#define ERR_ROW_CHILD_TYPE                                 230
#define ERR_COLUMN_PARENT_TYPE                             231
#define ERR_NOTIFICATION_PARENT_TYPE                       232
#define ERR_GROUP_PARENT_TYPE                              233
#define ERR_COMPLIANCE_PARENT_TYPE                         234
#define ERR_CAPABILITIES_PARENT_TYPE                       235
#define ERR_SPPI_SIGNED64_NUMBER_RANGE                     236
#define ERR_SPPI_UNSIGNED64_NUMBER_RANGE                   237
#define ERR_SMI_CONSTRUCT_IN_PIB                           238
#define ERR_SMI_TYPE_IN_PIB                                239
#define ERR_SPPI_CONSTRUCT_IN_MIB                          240
#define ERR_SPPI_TYPE_IN_MIB                               241
#define ERR_POLICY_ACCESS_IN_PIB                           242
#define ERR_INVALID_SPPI_ACCESS                            243
#define ERR_INVALID_SPPI_STATUS                            244
#define ERR_SUBJECT_CATEGORIES_MISSING                     245
#define ERR_NOT_ACCESSIBLE_IN_PIB_ACCESS                   246
#define ERR_REPORT_ONLY_IN_PIB_MIN_ACCESS                  247
#define ERR_INDEX_AND_AUGMENTS_USED                        248
#define ERR_INDEX_WITHOUT_PIB_INDEX                        249
#define ERR_ERROR_NUMBER_RANGE                             250
#define ERR_SPPI_BASETYPE_NOT_IMPORTED                     251
#define ERR_ROW_LACKS_PIB_INDEX                            252
#define ERR_PIB_INDEX_FOR_NON_ROW_TYPE                     253
#define ERR_OPAQUE_IN_SYNTAX                               254
#define ERR_IPADDRESS_IN_SYNTAX                            255
#define ERR_TABLE_LACKS_PIB_ACCESS                         256
#define ERR_PIB_ACCESS_FOR_NON_TABLE                       257
#define ERR_INSTALL_ERRORS_FOR_NON_TABLE                   258
#define ERR_UNIQUENESS_FOR_NON_ROW                         259
#define ERR_NOT_A_COLUMN                                   260
#define ERR_EXTENDS_WRONG_ROW_TYPE                         261
#define ERR_PIB_INDEX_NOT_INSTANCEID                       262
#define ERR_LACKING_PIB_REFERENCES                         263
#define ERR_PIB_REFERENCES_WRONG_TYPE                      264
#define ERR_PIB_REFERENCES_NOT_ROW                         265
#define ERR_LACKING_PIB_TAG                                266
#define ERR_PIB_TAG_WRONG_TYPE                             267
#define ERR_SUBJECT_CATEGORIES_MISSING_SUBID               268
#define ERR_SUBJECT_CATEGORIES_ALL_WITH_SUBID              269
#define ERR_SUBJECT_CATEGORIES_ALL                         270
#define ERR_PIB_TAG_TYPE                                   271
#define ERR_ATTRIBUTE_NOT_IN_GROUP                         272
#define ERR_OBJECTPTR_ELEMENT_IN_USE                       273
#define ERR_OID_ADMIN_ZERO                                 274
#define ERR_TYPE_STATUS_DEPRECATED                         275
#define ERR_TYPE_STATUS_OBSOLETE                           276
#define ERR_COMPLIANCE_MEMBER_NOT_LOCAL                    277
#define ERR_MIB_MODULENAME_SUFFIX                          278
#define ERR_PIB_MODULENAME_SUFFIX                          279
#define ERR_TYPE_WITHOUT_FORMAT                            280
#define ERR_OBJECT_IN_NOTIFICATION_GROUP                   281
#define ERR_NOTIFICATION_IN_OBJECT_GROUP                   282
#define ERR_MODULE_IDENTITY_REG_UNCONTROLLED               283
#define ERR_MODULE_IDENTITY_REG_ILLEGAL                    284
#define ERR_NAMESPACE_MISSING                              285
#define ERR_PREFIX_MISSING                                 286
#define ERR_INDEX_MISSING                                  287
#define ERR_REDEFINED_NAMESPACE                            288
#define ERR_REDEFINED_YANGVERSION                          289
#define ERR_REDEFINED_ORGANIZATION                         290
#define ERR_REDEFINED_CONTACT                              291
#define ERR_REDEFINED_ELEMENT                              292
#define ERR_CYCLIC_IMPORTS                                 293
#define ERR_SUBMODULE_BELONGS_TO_ANOTHER_MODULE            294
#define ERR_REQUIRED_ELEMENT                               295
#define ERR_WRONG_CARDINALITY                              296
#define ERR_DUPLICATED_CASE_IDENTIFIER                     297
#define ERR_WRONG_ENUM                                     298
#define ERR_DUPLICATED_ENUM_NAME                           299
#define ERR_DUPLICATED_PREFIX                              300
#define ERR_DUPLICATED_IDENTIFIER                          301
#define ERR_DUPLICATED_NODE_WHILE_GROUPING_INSTANTIATION   302
#define ERR_DUPLICATED_NODE_WHILE_AUGMENT_INSTANTIATION    303
#define ERR_SUBMODULE_DUPLICATED_IDENTIFIER                304
#define ERR_REFERENCE_NOT_RESOLVED                         305
#define ERR_EXPECTED_EXTENSION_ARGUMENT                    306
#define ERR_UNEXPECTED_EXTENSION_ARGUMENT                  307
#define ERR_ILLEGAL_TYPE_NAME                              308
#define ERR_CYCLIC_REFERENCE_CHAIN                         309
#define ERR_DESCEDANT_FORM                                 310
#define ERR_ABSOLUTE_FORM                                  311
#define ERR_XPATH_NOT_RESOLVED                             312
#define ERR_WRONG_AUGMENT_TARGET_NODE                      313
#define ERR_DATADEF_NODE_REQUIRED                          314
#define ERR_NODE_KIND_NOT_ALLOWED                          315
#define ERR_INVALID_CONFIG                                 316
#define ERR_KEY_REQUIRED                                   317
#define ERR_ARG_VALUE                                      318
#define ERR_DUPLICATED_KEY                                 319
#define ERR_INVALID_KEY_REFERENCE                          320
#define ERR_EMPTY_KEY                                      321
#define ERR_INVALID_KEY_LEAF_CONFIG_VALUE                  322
#define ERR_INVALID_UNIQUE_REFERENCE                       323
#define ERR_DUPLICATED_LEAF_IN_UNIQUE                      324
#define ERR_MUST_BE_CONFIG                                 325
#define ERR_IVALIDE_ORDERED_BY_VALUE                       326
#define ERR_IVALIDE_DEFAULT                                327
#define ERR_IVALIDE_DEFAULT_CASE                           328
#define ERR_MANDATORY_NODE_UNDER_DEFAULT_CASE              329
#define ERR_DATA_DEF_REQUIRED                              330
#define ERR_AUGMENTATION_BY_MANDATORY_NODE                 331
#define ERR_INVALID_REFINE                                 332
#define ERR_IDENTIFIER_DEFINED_IN_OTHER_SUBMODLE           333
#define ERR_IGNORED_CONFIG                                 334
#define ERR_RESTRICTION_NOT_ALLOWED                        335
#define ERR_CHILD_REQUIRED                                 336
#define ERR_DUPLICATED                                     337
#define ERR_DEFAULT_NOT_ALLOWED                            338
#define ERR_INVALID_UNION_TYPE                             339
#define ERR_IMPORT_REQUIRES_REVISION                       340
#define ERR_UNEXPECTED_KEYWORD                             341
#define ERR_BAD_PARENT                                     342
#define ERR_ABSTRACT                                       343
#define ERR_INHERITED_DUPLICATED_IDENTIFIER                344
#define ERR_CT_KEY_ALREADY_DEFINED                         345
#define ERR_INSTANCE_LIST_KEY_REQUIRED                     346
#define ERR_CT_REFINE                                      347
#define ERR_BAD_AUGMENT_ARG                                348
#define ERR_BAD_REFINE_ARG                                 349
#define ERR_BAD_DEVIATION_ARG                              350
#define ERR_BAD_DEVIATION_ADD                              351
#define ERR_BAD_DEVIATION_TYPE                             352
#define ERR_BAD_DEVIATION_DEL                              353
#define ERR_SMI2YANG_NON_UNIQUE_NAME                       354
