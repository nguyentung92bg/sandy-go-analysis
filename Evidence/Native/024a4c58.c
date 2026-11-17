/* IL2CPP: Dino.BusSand.View.GameView$$OnEscaped
void Dino_BusSand_View_GameView__OnEscaped (Dino_BusSand_View_GameView_o* __this, int32_t id, bool byPickup, bool fireTruck, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$OnEscaped
   void Dino_BusSand_View_GameView__OnEscaped (Dino_BusSand_View_GameView_o* __this, int32_t id,
   bool byPickup, bool fireTruck, const MethodInfo* method); */

void Dino_BusSand_View_GameView__OnEscaped_23a4c58
               (undefined1 param_1 [16],ulong param_2,float param_3,long param_4,undefined4 param_5,
               ulong param_6,ulong param_7)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  
  puVar3 = PTR_DAT_04cbc558;
                    /* try { // try from 024a4c9c to 025a4d6b has its CatchHandler @ 024a4c9c
                       catch() { ... } // from try @ 024a4c9c with catch @ 024a4c9c
                       catch() { ... } // from try @ 024a4df0 with catch @ 024a4c9c
                       catch() { ... } // from try @ 024a4e34 with catch @ 024a4c9c
                       catch() { ... } // from try @ 024a4e78 with catch @ 024a4c9c
                       catch() { ... } // from try @ 024a4e9c with catch @ 024a4c9c */
  if ((bRam0000000004f9c92f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cbc560);
    FUN_02132f7c(PTR_DAT_04cbc0f8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cbc568);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc570);
    FUN_02132f7c(PTR_DAT_04cbc558);
    FUN_02132f7c(PTR_DAT_04cbc578);
    FUN_02132f7c(PTR_DAT_04cbc580);
                    /* try { // try from 024a4d6c to 025a4d73 has its CatchHandler @ 024a4e58 */
    FUN_02132f7c(PTR_DAT_04cbc588);
    bRam0000000004f9c92f = 1;
  }
  lStack_98 = 0;
  uStack_a8 = 0;
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* try { // try from 024a4d94 to 025a4d9b has its CatchHandler @ 024a4e50 */
  Dino_BusSand_View_GameView___c__DisplayClass170_0___ctor_23abd8c(lVar4,0);
                    /* try { // try from 024a4da0 to 025a4dab has its CatchHandler @ 024a4e4c */
  if ((lVar4 == 0) || (*(long *)(param_4 + 0xe0) == 0)) goto LAB_024a585c;
                    /* try { // try from 024a4db0 to 025a4dbb has its CatchHandler @ 024a4e44 */
  uVar5 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                    (*(long *)(param_4 + 0xe0),param_5,lVar4 + 0x10,*(undefined8 *)PTR_DAT_04cbc4b8)
  ;
  if ((uVar5 & 1) == 0) {
    return;
  }
                    /* try { // try from 024a4dc0 to 025a4dcb has its CatchHandler @ 024a4e3c */
  if (*(long *)(param_4 + 0xf8) == 0) goto LAB_024a585c;
  uVar5 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                    (*(long *)(param_4 + 0xf8),param_5,&lStack_98,*(undefined8 *)PTR_DAT_04cbc560);
  if ((uVar5 & 1) == 0) {
                    /* try { // try from 024a4dec to 025a4def has its CatchHandler @ 024a4e48 */
                    /* try { // try from 024a4df0 to 025a4e27 has its CatchHandler @ 024a4c9c */
    if ((*(long *)(param_4 + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0x58), lVar6 == 0)) goto LAB_024a585c;
    System_Collections_Generic_Dictionary_int__Int32Enum___TryGetValue_3431fdc
              (lVar6,param_5,&uStack_a8,*(undefined8 *)PTR_DAT_04cbc0f8);
    fVar17 = (float)param_2;
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1d0);
                    /* try { // try from 024a4e28 to 025a4e2b has its CatchHandler @ 024a4e54 */
                    /* try { // try from 024a4e2c to 025a4e2f has its CatchHandler @ 024a4e40 */
    System_Collections_Generic_List_Vector3____ctor_3af944c(lVar6,*(undefined8 *)PTR_DAT_04cb3c10);
                    /* try { // try from 024a4e30 to 025a4e33 has its CatchHandler @ 024a4e38 */
                    /* try { // try from 024a4e34 to 025a4e73 has its CatchHandler @ 024a4c9c */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a4e30 with catch @ 024a4e38
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a4dc0 with catch @ 024a4e3c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a4e2c with catch @ 024a4e40
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a4db0 with catch @ 024a4e44
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a4dec with catch @ 024a4e48
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a4da0 with catch @ 024a4e4c
                        */
    if ((*(long *)(lVar4 + 0x10) == 0) ||
       ((lVar7 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar4 + 0x10),0), lVar7 == 0
        || (uVar11 = UnityEngine_Transform__get_position_43d0e48(lVar7,0), puVar3 = PTR_DAT_04caa170
           , lVar6 == 0)))) goto LAB_024a585c;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a4d94 with catch @ 024a4e50
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a4e28 with catch @ 024a4e54
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a4d6c with catch @ 024a4e58
                        */
    lVar7 = *(long *)(lVar6 + 0x10);
    lVar9 = *(long *)PTR_DAT_04caa170;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_024a585c;
    uVar1 = *(uint *)(lVar6 + 0x18);
                    /* try { // try from 024a4e74 to 025a4e77 has its CatchHandler @ 024a4e90 */
                    /* try { // try from 024a4e78 to 025a4e93 has its CatchHandler @ 024a4c9c */
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * 0xc;
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    /* catch() { ... } // from try @ 024a4e74 with catch @ 024a4e90 */
      *(undefined4 *)(lVar7 + 0x20) = uVar11;
      *(float *)(lVar7 + 0x24) = fVar17;
                    /* try { // try from 024a4e94 to 025a4e9b has its CatchHandler @ 024a4ea4 */
      *(float *)(lVar7 + 0x28) = param_3;
    }
    else {
                    /* try { // try from 024a4e9c to 025a4ea7 has its CatchHandler @ 024a4c9c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024a4e94 with catch @ 024a4ea4
                        */
      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                (lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    if ((*(long *)(lVar4 + 0x10) == 0) ||
       (lVar7 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar4 + 0x10),0), lVar7 == 0)
       ) goto LAB_024a585c;
    fVar12 = (float)UnityEngine_Transform__get_position_43d0e48(lVar7,0);
    if (cRam0000000004f9c95c == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9c95c = '\x01';
    }
    lVar7 = *(long *)(lVar6 + 0x10);
    fVar24 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x38);
    uVar25 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x30);
    lVar9 = *(long *)puVar3;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_024a585c;
    uVar22 = NEON_fmov(0x41f00000,4);
    uVar1 = *(uint *)(lVar6 + 0x18);
    fVar18 = (float)uVar25 * (float)uVar22;
    fVar20 = (float)((ulong)uVar25 >> 0x20) * (float)((ulong)uVar22 >> 0x20);
    param_2 = CONCAT44(fVar20,fVar18);
    fVar17 = fVar17 + fVar20;
    param_3 = param_3 + fVar24 * 30.0;
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * 0xc;
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      *(ulong *)(lVar7 + 0x20) = CONCAT44(fVar17,fVar12 + fVar18);
      *(float *)(lVar7 + 0x28) = param_3;
      lStack_98 = lVar6;
    }
    else {
      param_2 = (ulong)(uint)fVar17;
      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                (lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      lStack_98 = lVar6;
    }
  }
  if ((param_6 & 1) == 0) {
LAB_024a5250:
    uVar11 = 0;
    bVar2 = true;
  }
  else {
    if ((*(long *)(lVar4 + 0x10) == 0) ||
       (lVar6 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar4 + 0x10),0), lVar6 == 0)
       ) goto LAB_024a585c;
    uVar25 = UnityEngine_Transform__get_position_43d0e48(lVar6,0);
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1d0);
    System_Collections_Generic_List_Vector3____ctor_3af944c(lVar6,*(undefined8 *)PTR_DAT_04cb3c10);
    puVar3 = PTR_DAT_04caa170;
    if (lVar6 == 0) goto LAB_024a585c;
    lVar7 = *(long *)(lVar6 + 0x10);
    lVar9 = *(long *)PTR_DAT_04caa170;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_024a585c;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * 0xc;
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      *(float *)(lVar7 + 0x20) = (float)uVar25;
      *(float *)(lVar7 + 0x24) = (float)param_2;
      *(float *)(lVar7 + 0x28) = param_3;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                (uVar25,param_2,param_3,lVar6,
                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    if (cRam0000000004f9bcf8 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_024a585c;
    fVar17 = *(float *)(*(long *)(param_4 + 0x30) + 0x60);
    lVar7 = *(long *)(lVar6 + 0x10);
    fVar12 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
    uVar22 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
    lVar9 = *(long *)puVar3;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_024a585c;
    uVar23 = NEON_fmov(0x40200000,4);
    uVar1 = *(uint *)(lVar6 + 0x18);
    fVar24 = (float)param_2 +
             (float)((ulong)uVar22 >> 0x20) * fVar17 * (float)((ulong)uVar23 >> 0x20);
    uVar25 = CONCAT44(fVar24,(float)uVar25 + (float)uVar22 * fVar17 * (float)uVar23);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * 0xc;
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar7 + 0x20) = uVar25;
      *(float *)(lVar7 + 0x28) = param_3 + fVar12 * fVar17 * 2.5;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                (uVar25,fVar24,lVar6,
                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == 0) goto LAB_024a585c;
    fVar17 = *(float *)(lVar7 + 0x4c);
    lVar9 = *(long *)(lVar6 + 0x10);
    fVar12 = *(float *)(lVar7 + 0x60);
    lVar7 = *(long *)puVar3;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_024a585c;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      lVar9 = lVar9 + (long)(int)uVar1 * 0xc;
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      *(float *)(lVar9 + 0x20) = fVar17 + -3.0;
      *(float *)(lVar9 + 0x24) = fVar12 * 2.5;
      *(float *)(lVar9 + 0x28) = param_3 + fVar12 + fVar12;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                (lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    lStack_98 = lVar6;
    uVar25 = Dino_BusSand_View_ArtPack__get_Data_238ddf0();
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar25,0,0);
    uVar25 = 0;
    if ((uVar5 & 1) != 0) {
      lVar6 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
      if (lVar6 == 0) goto LAB_024a585c;
      uVar25 = *(undefined8 *)(lVar6 + 0x100);
    }
    lVar6 = Dino_BusSand_View_PickUpClaw__Spawn_23dab6c
                      (uVar25,*(undefined8 *)(param_4 + 0x98),*(undefined8 *)(lVar4 + 0x10),0);
    if (lVar6 == 0) goto LAB_024a5250;
    lVar7 = *(long *)(param_4 + 0xe8);
    if (lVar7 == 0) goto LAB_024a585c;
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar10 = *(long *)PTR_DAT_04cbc568;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_024a585c;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
      *plVar8 = lVar6;
      thunk_FUN_02134474(plVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar7,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    bVar2 = false;
    uVar11 = 1;
  }
  lVar6 = lStack_98;
  if (*(int *)(*(long *)PTR_DAT_04cb2870 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar18 = (float)Dino_BusSand_View_GameView__RouteLength_239ed68(lVar6);
  fVar12 = *(float *)(param_4 + 0x108);
  fVar17 = _UNK_00e2043c;
  fVar24 = _UNK_00e20448;
  if (bVar2) {
    if ((param_6 & 1) == 0) {
      if (fVar12 <= _UNK_00e20448) {
        fVar12 = _UNK_00e20448;
      }
      if (_UNK_00e2043c <= fVar18 / fVar12) {
        fVar17 = fVar18 / fVar12;
      }
    }
    else {
      fVar20 = fVar12 + fVar12;
      if (fVar12 + fVar12 <= _UNK_00e20448) {
        fVar20 = _UNK_00e20448;
      }
      if (_UNK_00e2043c <= fVar18 / fVar20) {
        fVar17 = fVar18 / fVar20;
      }
      fVar12 = 0.0;
LAB_024a5308:
      fVar18 = *(float *)(param_4 + 0x220);
      fVar20 = fVar12 + fVar17 + _UNK_00e207cc;
      fVar12 = (float)UnityEngine_Time__get_time_43cd540(0);
      fVar20 = fVar20 + fVar12;
      if (fVar18 <= fVar20) {
        fVar18 = fVar20;
      }
      *(float *)(param_4 + 0x220) = fVar18;
    }
  }
  else {
    fVar20 = fVar12 * _UNK_00e1feac;
    if (fVar12 * _UNK_00e1feac <= _UNK_00e20448) {
      fVar20 = _UNK_00e20448;
    }
    if (_UNK_00e2043c <= fVar18 / fVar20) {
      fVar17 = fVar18 / fVar20;
    }
    fVar12 = _UNK_00e204f0;
    if ((param_6 & 1) != 0) goto LAB_024a5308;
  }
  lVar6 = lStack_98;
  lVar7 = *(long *)(lVar4 + 0x10);
  if ((param_7 & 1) == 0) {
    uVar25 = 0;
  }
  else {
    uVar25 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar25,lVar4,*(undefined8 *)PTR_DAT_04cbc570,0);
  }
  if (lVar7 == 0) goto LAB_024a585c;
  fVar12 = 0.0;
  if (!bVar2) {
    fVar12 = _UNK_00e204f0;
  }
  Dino_BusSand_View_VehicleView__StartEscape_23fe4a0(fVar17,lVar7,lVar6,uVar25,uVar11,0);
  if ((param_6 & 1) == 0) {
    Dino_BusSand_View_GameView__LaunchShove_239fe64(param_4,*(undefined8 *)(lVar4 + 0x10));
    if ((*(long *)(param_4 + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0x58), lVar6 == 0)) goto LAB_024a585c;
    System_Collections_Generic_Dictionary_int__Int32Enum___TryGetValue_3431fdc
              (lVar6,param_5,(long)&uStack_a8 + 4,*(undefined8 *)PTR_DAT_04cbc0f8);
    puVar3 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar3;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar6 != 0) {
      uVar11 = 0x3f000000;
      if (uStack_a8._4_4_ != 1) {
        uVar11 = 0;
      }
      uVar26 = 0x3f800000;
      if (uStack_a8._4_4_ != 2) {
        uVar26 = uVar11;
      }
      if ((*(long *)(lVar4 + 0x10) == 0) ||
         (lVar7 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar4 + 0x10),0),
         lVar7 == 0)) goto LAB_024a585c;
      UnityEngine_Transform__get_position_43d0e48(lVar7,0);
      fVar12 = (float)Dino_BusSand_View_GameView__PanOf_23a7184(param_4);
      Dino_BusSand_GameAudio__Depart_2382a1c(uVar26,lVar6,0);
    }
  }
  else {
    if (bVar2) {
      uVar25 = *(undefined8 *)(param_4 + 0xc0);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar25,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_024a585c;
        lVar7 = *(long *)(param_4 + 0xc0);
        lVar6 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar4 + 0x10),0);
        if ((lVar6 == 0) ||
           (UnityEngine_Transform__get_position_43d0e48(lVar6,0), uVar26 = _UNK_00e20178,
           uVar11 = _UNK_00e20170, lVar7 == 0)) goto LAB_024a585c;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        Dino_BusSand_View_MechFx__Play_23be070(lVar7,*(undefined8 *)PTR_DAT_04cbc578,0,&uStack_c0,0)
        ;
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_024a585c;
        lVar7 = *(long *)(param_4 + 0xc0);
        lVar6 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar4 + 0x10),0);
        if (lVar6 == 0) goto LAB_024a585c;
        uVar13 = UnityEngine_Transform__get_position_43d0e48(lVar6,0);
        if ((*(long *)(lVar4 + 0x10) == 0) ||
           (uVar25 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar4 + 0x10),0),
           lVar7 == 0)) goto LAB_024a585c;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        Dino_BusSand_View_MechFx__Play_23be070
                  (uVar13,fVar12,fVar24,uVar11,uVar26,lVar7,*(undefined8 *)PTR_DAT_04cbc588,uVar25,
                   &uStack_d8,0);
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_024a585c;
        lVar7 = *(long *)(param_4 + 0xc0);
        lVar6 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar4 + 0x10),0);
        if (lVar6 == 0) goto LAB_024a585c;
        uVar11 = UnityEngine_Transform__get_position_43d0e48(lVar6,0);
        if ((*(long *)(lVar4 + 0x10) == 0) ||
           (uVar25 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar4 + 0x10),0),
           lVar7 == 0)) goto LAB_024a585c;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        Dino_BusSand_View_MechFx__Play_23be070
                  (uVar11,fVar12,fVar24,0x3f800000,uVar26,lVar7,*(undefined8 *)PTR_DAT_04cbc580,
                   uVar25,&uStack_f0,0);
      }
    }
    puVar3 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar3;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar6 != 0) {
      if ((*(long *)(lVar4 + 0x10) == 0) ||
         (lVar7 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar4 + 0x10),0),
         lVar7 == 0)) goto LAB_024a585c;
      UnityEngine_Transform__get_position_43d0e48(lVar7,0);
      Dino_BusSand_View_GameView__PanOf_23a7184(param_4);
      Dino_BusSand_GameAudio__BoosterUsed_2383cec(lVar6,2,0);
    }
    if ((*(long *)(param_4 + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0x58), lVar6 == 0)) goto LAB_024a585c;
    System_Collections_Generic_Dictionary_int__Int32Enum___TryGetValue_3431fdc
              (lVar6,param_5,(long)&uStack_a8 + 4,*(undefined8 *)PTR_DAT_04cbc0f8);
  }
  if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Haptics__Play_2388ed8(1);
  if (*(long *)(lVar4 + 0x10) != 0) {
    lVar7 = *(long *)(param_4 + 0xb8);
    lVar6 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar4 + 0x10),0);
    if (lVar6 != 0) {
      fVar17 = (float)UnityEngine_Transform__get_position_43d0e48(lVar6,0);
      if ((*(long *)(lVar4 + 0x10) != 0) &&
         (fVar18 = fVar24, fVar20 = fVar12,
         lVar6 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar4 + 0x10),0), lVar6 != 0
         )) {
        fVar14 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar6,0);
        if (*(long *)(lVar4 + 0x10) != 0) {
          fVar21 = fVar18;
          fVar19 = fVar20;
          fVar15 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc
                                    (*(long *)(lVar4 + 0x10),0);
          if (((*(long *)(lVar4 + 0x10) != 0) &&
              (lVar6 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar4 + 0x10),0),
              lVar6 != 0)) &&
             (fVar16 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar6,0), lVar7 != 0)) {
            fVar12 = fVar12 - fVar20 * fVar15 * _UNK_00e2094c;
            fVar24 = fVar24 - fVar18 * fVar15 * _UNK_00e2094c;
            Dino_BusSand_View_Fx__Dust_2395354
                      (fVar17 - fVar14 * fVar15 * _UNK_00e2094c,fVar12,fVar24,fVar16 * _UNK_00e201f8
                       ,fVar19 * _UNK_00e201f8,fVar21 * _UNK_00e201f8,_UNK_00e208e8,lVar7,4);
            if ((*(long *)(lVar4 + 0x10) != 0) &&
               (lVar4 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar4 + 0x10),0),
               lVar4 != 0)) {
              uVar11 = UnityEngine_Transform__get_position_43d0e48(lVar4,0);
              *(undefined4 *)(param_4 + 0x1e0) = uVar11;
              *(float *)(param_4 + 0x1e4) = fVar12;
              *(float *)(param_4 + 0x1e8) = fVar24;
              Dino_BusSand_View_GameView__RefreshArrows_239e0ac(param_4);
              return;
            }
          }
        }
      }
    }
  }
LAB_024a585c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

