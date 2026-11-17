/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BuildDune
void Dino_BusSand_View_MechanicLayer__BuildDune (Dino_BusSand_View_MechanicLayer_o* __this, int32_t index, Dino_BusSand_Core_LotObjectDef_o* od, UnityEngine_Vector3_o c, UnityEngine_Vector3_o dir, UnityEngine_Transform_o* root, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BuildDune
   void Dino_BusSand_View_MechanicLayer__BuildDune (Dino_BusSand_View_MechanicLayer_o* __this,
   int32_t index, Dino_BusSand_Core_LotObjectDef_o* od, UnityEngine_Vector3_o c,
   UnityEngine_Vector3_o dir, UnityEngine_Transform_o* root, float delay, const MethodInfo* method);
    */

void Dino_BusSand_View_MechanicLayer__BuildDune_23c2c18
               (undefined8 param_1,undefined8 param_2,float param_3,undefined4 param_4,uint param_5,
               undefined4 param_6,undefined4 param_7,long param_8,undefined4 param_9,long param_10,
               undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  
  uVar11 = param_2;
  fVar16 = param_3;
  if ((bRam0000000004f9c9c7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa138);
    FUN_02132f7c(PTR_DAT_04cb7780);
    FUN_02132f7c(PTR_DAT_04cbd148);
    FUN_02132f7c(PTR_DAT_04cbd150);
    FUN_02132f7c(PTR_DAT_04cbd158);
                    /* try { // try from 024c2cb4 to 025c2cdb has its CatchHandler @ 024c3028 */
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04caa0d8);
    FUN_02132f7c(PTR_DAT_04cbd160);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 024c2d18 to 025c2d3f has its CatchHandler @ 024c3024 */
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cbd168);
    FUN_02132f7c(PTR_DAT_04caa100);
    FUN_02132f7c(PTR_DAT_04cb18f8);
    FUN_02132f7c(PTR_DAT_04cbd170);
    FUN_02132f7c(PTR_DAT_04cbc978);
    FUN_02132f7c(PTR_DAT_04caa108);
    FUN_02132f7c(PTR_DAT_04cbd178);
                    /* try { // try from 024c2d8c to 025c2db3 has its CatchHandler @ 024c3018 */
    FUN_02132f7c(PTR_DAT_04caa120);
    bRam0000000004f9c9c7 = 1;
  }
  uVar17 = (undefined4)uVar11;
  if (param_10 == 0) goto LAB_024c35c8;
  uVar11 = *(undefined8 *)(param_10 + 0x30);
  if (*(int *)(*(long *)PTR_DAT_04cbbfb8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_Core_SandPalette__Id_2419278(uVar11,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_8 + 0x58) == 0) goto LAB_024c35c8;
                    /* try { // try from 024c2df4 to 025c2e1b has its CatchHandler @ 024c2fb4 */
  System_Collections_Generic_Dictionary_int__byte___set_Item_341beb8
            (*(long *)(param_8 + 0x58),param_9,uVar5,*(undefined8 *)PTR_DAT_04cbd148);
  uVar11 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  lVar12 = 0;
  if ((uVar6 & 1) != 0) {
    lVar12 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
    if (lVar12 == 0) goto LAB_024c35c8;
    uVar11 = *(undefined8 *)(lVar12 + 0xa0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
                    /* try { // try from 024c2e58 to 025c2e7f has its CatchHandler @ 024c2fb0 */
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    lVar12 = 0;
    if ((uVar6 & 1) != 0) {
      lVar12 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
      if ((lVar12 == 0) || (*(long *)(lVar12 + 0xa0) == 0)) goto LAB_024c35c8;
      uVar11 = UnityEngine_GameObject__get_transform_43c1048(*(long *)(lVar12 + 0xa0),0);
      lVar12 = Dino_BusSand_Util__FindDeep_238d3bc(uVar11,*(undefined8 *)PTR_DAT_04cbc978,0);
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
  lVar13 = 0;
                    /* try { // try from 024c2ec8 to 025c2ecb has its CatchHandler @ 024c2fac */
  if ((uVar6 & 1) != 0) {
    if (lVar12 == 0) goto LAB_024c35c8;
    lVar13 = UnityEngine_Component__GetComponent_object__26f97e8
                       (lVar12,*(undefined8 *)PTR_DAT_04caa138);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cb7780;
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
  lVar14 = 0;
  if ((uVar6 & 1) != 0) {
    if (lVar12 == 0) goto LAB_024c35c8;
                    /* try { // try from 024c2f20 to 025c2f47 has its CatchHandler @ 024c3014 */
    lVar14 = UnityEngine_Component__GetComponent_object__26f97e8(lVar12,*(undefined8 *)puVar4);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cb70d8;
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
  puVar2 = PTR_DAT_04caa208;
  if ((uVar6 & 1) == 0) {
LAB_024c3314:
    puVar1 = PTR_DAT_04cbd160;
                    /* try { // try from 024c3320 to 025c3347 has its CatchHandler @ 024c3530 */
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_View_PackPalette__Main_2390528(uVar5,0);
    lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    Dino_BusSand_View_PropKit_MeshBuilder___ctor_23dce3c(lVar12,0);
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    puVar1 = PTR_DAT_04cbd170;
    if (lVar12 == 0) goto LAB_024c35c8;
                    /* try { // try from 024c3384 to 025c33ab has its CatchHandler @ 024c352c */
    uVar21 = 0x3f000000;
    puVar10 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
                    /* try { // try from 024c33b4 to 025c33bb has its CatchHandler @ 024c3518 */
                    /* try { // try from 024c33c0 to 025c33c7 has its CatchHandler @ 024c3524 */
    Dino_BusSand_View_PropKit_MeshBuilder__Sphere_23e0858
              (*puVar10,puVar10[1],puVar10[2],0x3f000000,uVar5,uVar17,fVar16,0x3f800000,lVar12,10,0)
    ;
                    /* try { // try from 024c33c8 to 025c33d3 has its CatchHandler @ 024c351c */
    uVar11 = Dino_BusSand_View_PropKit_MeshBuilder__ToMesh_23dcfe4(lVar12,*(undefined8 *)puVar1,0);
                    /* try { // try from 024c33dc to 025c33e7 has its CatchHandler @ 024c3510 */
    uVar6 = (ulong)param_5;
                    /* try { // try from 024c33e8 to 025c3407 has its CatchHandler @ 024c3514 */
    uVar17 = UnityEngine_Quaternion__LookRotation_43af354(param_4,uVar6,param_6,0);
                    /* try { // try from 024c340c to 025c3417 has its CatchHandler @ 024c350c */
                    /* try { // try from 024c3424 to 025c342f has its CatchHandler @ 024c3504 */
                    /* try { // try from 024c3430 to 025c343b has its CatchHandler @ 024c3508 */
    lVar12 = Dino_BusSand_View_MechanicLayer__Prop_23c2534
                       (param_1,param_2,param_3,uVar17,uVar6 & 0xffffffff,param_6,uVar21,param_8,
                        uVar11,param_11,0);
    if (lVar12 == 0) goto LAB_024c35c8;
                    /* try { // try from 024c344c to 025c344f has its CatchHandler @ 024c3528 */
                    /* try { // try from 024c3450 to 025c34f3 has its CatchHandler @ 024c3104 */
    lVar8 = UnityEngine_Component__GetComponent_object__26f97e8(lVar12,*(undefined8 *)puVar4);
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
    if ((uVar6 & 1) == 0) goto LAB_024c3314;
                    /* try { // try from 024c2f88 to 025c2f8b has its CatchHandler @ 024c2fa8 */
                    /* try { // try from 024c2f90 to 025c2f93 has its CatchHandler @ 024c2fa4 */
    plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
                    /* try { // try from 024c2f98 to 025c2f9b has its CatchHandler @ 024c2fa0 */
                    /* try { // try from 024c2f9c to 025c2fcf has its CatchHandler @ 024c2b74 */
                    /* catch() { ... } // from try @ 024c2f98 with catch @ 024c2fa0 */
                    /* catch() { ... } // from try @ 024c2f90 with catch @ 024c2fa4 */
                    /* catch() { ... } // from try @ 024c2f88 with catch @ 024c2fa8 */
                    /* catch() { ... } // from try @ 024c2ec8 with catch @ 024c2fac */
                    /* catch() { ... } // from try @ 024c2e58 with catch @ 024c2fb0 */
                    /* catch() { ... } // from try @ 024c2df4 with catch @ 024c2fb4 */
    uVar11 = *(undefined8 *)PTR_DAT_04cb6de0;
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
    }
    lVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar11,0);
                    /* try { // try from 024c2fd0 to 025c2fd3 has its CatchHandler @ 024c3004 */
    if (plVar7 == (long *)0x0) goto LAB_024c35c8;
                    /* try { // try from 024c2fe4 to 025c2fe7 has its CatchHandler @ 024c3020 */
                    /* try { // try from 024c2fe8 to 025c2feb has its CatchHandler @ 024c301c */
    if ((lVar12 != 0) &&
       (lVar8 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_024c35d0:
      uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar11,0);
    }
                    /* try { // try from 024c2ff0 to 025c2ff7 has its CatchHandler @ 024c3100 */
    if ((int)plVar7[3] == 0) {
LAB_024c35cc:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
                    /* try { // try from 024c2ffc to 025c3003 has its CatchHandler @ 024c3010 */
    plVar7[4] = lVar12;
                    /* catch() { ... } // from try @ 024c2fd0 with catch @ 024c3004
                       try { // try from 024c3004 to 025c3047 has its CatchHandler @ 024c2b74 */
    thunk_FUN_02134474(plVar7 + 4,lVar12);
                    /* catch() { ... } // from try @ 024c2ffc with catch @ 024c3010 */
                    /* catch() { ... } // from try @ 024c2f20 with catch @ 024c3014 */
                    /* catch() { ... } // from try @ 024c2d8c with catch @ 024c3018 */
    lVar12 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)PTR_DAT_04cb6de8,0);
                    /* catch() { ... } // from try @ 024c2fe8 with catch @ 024c301c */
                    /* catch() { ... } // from try @ 024c2fe4 with catch @ 024c3020 */
                    /* catch() { ... } // from try @ 024c2d18 with catch @ 024c3024 */
                    /* catch() { ... } // from try @ 024c2cb4 with catch @ 024c3028 */
    if ((lVar12 != 0) &&
       (lVar8 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
    goto LAB_024c35d0;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_024c35cc;
                    /* try { // try from 024c3048 to 025c304b has its CatchHandler @ 024c30ec */
                    /* try { // try from 024c304c to 025c30ef has its CatchHandler @ 024c2b74 */
    plVar7[5] = lVar12;
    thunk_FUN_02134474(plVar7 + 5,lVar12);
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar8,*(undefined8 *)PTR_DAT_04cb18f8,plVar7,0);
    if ((lVar8 == 0) ||
       (lVar12 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0), lVar12 == 0))
    goto LAB_024c35c8;
    UnityEngine_Transform__SetParent_43d1e34(lVar12,param_11,0,0);
    lVar9 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (lVar8,*(undefined8 *)PTR_DAT_04cb6dc0);
    if ((lVar13 == 0) ||
       (uVar11 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar13,0), lVar9 == 0))
    goto LAB_024c35c8;
    UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar9,uVar11,0);
                    /* catch() { ... } // from try @ 024c3048 with catch @ 024c30ec */
                    /* try { // try from 024c30f0 to 025c30f7 has its CatchHandler @ 024c3100 */
    lVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (lVar8,*(undefined8 *)PTR_DAT_04cb6dc8);
                    /* try { // try from 024c30f8 to 025c3103 has its CatchHandler @ 024c2b74 */
                    /* catch() { ... } // from try @ 024c2ff0 with catch @ 024c3100
                       catch() { ... } // from try @ 024c30f0 with catch @ 024c3100 */
                    /* try { // try from 024c3104 to 025c331f has its CatchHandler @ 024c3104
                       catch() { ... } // from try @ 024c3104 with catch @ 024c3104
                       catch() { ... } // from try @ 024c3450 with catch @ 024c3104
                       catch() { ... } // from try @ 024c34f8 with catch @ 024c3104
                       catch() { ... } // from try @ 024c3568 with catch @ 024c3104 */
    if ((lVar14 == 0) ||
       (uVar11 = UnityEngine_Renderer__get_sharedMaterial_43743c8(lVar14,0), lVar8 == 0))
    goto LAB_024c35c8;
    UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar8,uVar11,0);
    UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar8,0,0);
    lVar13 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar13,0);
    if (lVar13 == 0) goto LAB_024c35c8;
    UnityEngine_Mesh__get_bounds_438fac4(&uStack_c0,lVar13,0);
    fVar22 = fStack_b0;
    fVar15 = fStack_b4;
    fVar16 = uStack_c0._4_4_;
    fVar19 = _UNK_00e20448;
    if (_UNK_00e20448 <= fStack_ac + fStack_ac) {
      fVar19 = fStack_ac + fStack_ac;
    }
    UnityEngine_Quaternion__LookRotation_43af354(param_4,param_5,param_6,0);
    UnityEngine_Transform__set_rotation_43d13f8(lVar12,0);
    fVar15 = fVar15 + fVar15;
    uVar6 = CONCAT44(fVar22 + fVar22,fVar15);
    uVar6 = uVar6 ^ (uVar6 ^ 0x3c23d70a3c23d70a) &
                    CONCAT44(-(uint)(fVar22 + fVar22 < 0.01),-(uint)(fVar15 < 0.01));
    fVar18 = *(float *)(param_8 + 0x50);
    fVar15 = (_UNK_00e20170 / (float)(uVar6 >> 0x20)) * fVar18;
    UnityEngine_Transform__set_localScale_43d1be0
              (CONCAT44(fVar15,(*(float *)(param_10 + 0x28) / (float)uVar6) * fVar18),fVar15,
               (*(float *)(param_10 + 0x24) / fVar19) * fVar18,lVar12,0);
    if (cRam0000000004f9bcf8 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
    lVar13 = *(long *)(*(long *)puVar2 + 0xb8);
    fVar15 = *(float *)(lVar13 + 0x18);
    fVar19 = *(float *)(lVar13 + 0x1c);
    fVar18 = *(float *)(lVar13 + 0x20);
    fVar16 = fVar16 - fVar22;
    fVar22 = fVar16 * fVar15;
    UnityEngine_Transform__get_localScale_43d1b0c(fVar16,fVar15,lVar12,0);
    UnityEngine_Transform__set_position_43d0f1c
              ((float)param_1 - fVar22 * fVar15,(float)param_2 - fVar16 * fVar19 * fVar15,
               param_3 - fVar16 * fVar18 * fVar15,lVar12,0);
    lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa0d8);
    UnityEngine_MaterialPropertyBlock___ctor_4372b28(lVar13,0);
    if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_View_PackPalette__Main_2390528(uVar5,0);
    if (lVar13 == 0) goto LAB_024c35c8;
    UnityEngine_MaterialPropertyBlock__SetColor_4372eb4(lVar13,*(undefined8 *)PTR_DAT_04caa100,0);
    Dino_BusSand_View_PackPalette__Shadow_2390624(uVar5,0);
    UnityEngine_MaterialPropertyBlock__SetColor_4372eb4(lVar13,*(undefined8 *)PTR_DAT_04caa108,0);
    UnityEngine_MaterialPropertyBlock__SetFloat_4372e2c
              (0x3f800000,lVar13,*(undefined8 *)PTR_DAT_04caa120,0);
    UnityEngine_Renderer__SetPropertyBlock_4373a18(lVar8,lVar13,0);
  }
  if (cRam0000000004f9bcf8 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9bcf8 = '\x01';
  }
  fVar16 = *(float *)(param_8 + 0x50);
  uVar20 = NEON_fmov(0x3fc00000,4);
  uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  fVar15 = (float)param_2 + (float)((ulong)uVar11 >> 0x20) * fVar16 * (float)((ulong)uVar20 >> 0x20)
  ;
  plVar7 = (long *)Dino_BusSand_View_MechanicLayer__Label_23c26b4
                             (CONCAT44(fVar15,(float)param_1 +
                                              (float)uVar11 * fVar16 * (float)uVar20),fVar15,
                              param_3 + *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) *
                                        fVar16 * 1.5,0x3f000000,0x3f800000,0x3f800000,0x3f800000,
                              0x3f800000,param_8,param_11);
  puVar1 = PTR_DAT_04cbd168;
  if (plVar7 != (long *)0x0) {
                    /* try { // try from 024c34f4 to 025c34f7 has its CatchHandler @ 024c3520 */
                    /* try { // try from 024c34f8 to 025c354b has its CatchHandler @ 024c3104 */
    (**(code **)(*plVar7 + 0x518))
              (plVar7,*(undefined8 *)PTR_DAT_04cbd178,*(undefined8 *)(*plVar7 + 0x520));
                    /* catch() { ... } // from try @ 024c3424 with catch @ 024c3504 */
                    /* catch() { ... } // from try @ 024c3430 with catch @ 024c3508 */
                    /* catch() { ... } // from try @ 024c340c with catch @ 024c350c */
    lVar13 = *(long *)(param_8 + 0x78);
                    /* catch() { ... } // from try @ 024c33dc with catch @ 024c3510 */
                    /* catch() { ... } // from try @ 024c33e8 with catch @ 024c3514 */
                    /* catch() { ... } // from try @ 024c33b4 with catch @ 024c3518 */
                    /* catch() { ... } // from try @ 024c33c8 with catch @ 024c351c */
                    /* catch() { ... } // from try @ 024c34f4 with catch @ 024c3520 */
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
                    /* catch() { ... } // from try @ 024c33c0 with catch @ 024c3524 */
                    /* catch() { ... } // from try @ 024c344c with catch @ 024c3528 */
    System_ValueTuple_object__object__object__float____ctor_311e090
              (0,&uStack_e0,lVar12,lVar8,plVar7,*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 024c3384 with catch @ 024c352c */
    if (lVar13 != 0) {
                    /* catch() { ... } // from try @ 024c3320 with catch @ 024c3530 */
      uStack_b8 = (undefined4)uStack_d8;
      fStack_b4 = (float)((ulong)uStack_d8 >> 0x20);
                    /* try { // try from 024c354c to 025c354f has its CatchHandler @ 024c355c */
      uStack_c0 = uStack_e0;
      uStack_a8 = uStack_c8;
      fStack_b0 = (float)uStack_d0;
      fStack_ac = (float)((ulong)uStack_d0 >> 0x20);
      System_Collections_Generic_Dictionary_int__ValueTuple_object__object__object__float____set_Item_3414fe0
                (lVar13,param_9,&uStack_c0,*(undefined8 *)PTR_DAT_04cbd158);
      lVar13 = *(long *)(param_8 + 200);
                    /* catch() { ... } // from try @ 024c354c with catch @ 024c355c */
                    /* try { // try from 024c3560 to 025c3567 has its CatchHandler @ 024c3570 */
      UnityEngine_Transform__get_localScale_43d1b0c(lVar12,0);
      if (lVar13 != 0) {
                    /* try { // try from 024c3568 to 025c3573 has its CatchHandler @ 024c3104 */
                    /* catch() { ... } // from try @ 024c3560 with catch @ 024c3570 */
                    /* try { // try from 024c3574 to 025c36bf has its CatchHandler @ 024c3574
                       catch() { ... } // from try @ 024c3574 with catch @ 024c3574
                       catch() { ... } // from try @ 024c37b4 with catch @ 024c3574
                       catch() { ... } // from try @ 024c37f4 with catch @ 024c3574
                       catch() { ... } // from try @ 024c3834 with catch @ 024c3574
                       catch() { ... } // from try @ 024c3858 with catch @ 024c3574 */
        System_Collections_Generic_Dictionary_int__Vector3___set_Item_344be38
                  (lVar13,param_9,*(undefined8 *)PTR_DAT_04cbd150);
        Dino_BusSand_View_MechanicLayer__PopIn_23c2a68(param_7,_UNK_00e20104,param_8,lVar12);
        return;
      }
    }
  }
LAB_024c35c8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

