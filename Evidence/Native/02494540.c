/* IL2CPP: Dino.BusSand.View.ChainRig$$OnTrail
void Dino_BusSand_View_ChainRig__OnTrail (Dino_BusSand_View_ChainRig_o* __this, Dino_BusSand_View_ChainRig_Hitch_o* h, Dino_BusSand_View_VehicleView_o* a, Dino_BusSand_View_VehicleView_o* b, float d1, float d2, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.ChainRig$$OnTrail
   void Dino_BusSand_View_ChainRig__OnTrail (Dino_BusSand_View_ChainRig_o* __this,
   Dino_BusSand_View_ChainRig_Hitch_o* h, Dino_BusSand_View_VehicleView_o* a,
   Dino_BusSand_View_VehicleView_o* b, float d1, float d2, float dt, const MethodInfo* method); */

void Dino_BusSand_View_ChainRig__OnTrail_2394540
               (float param_1,float param_2,float param_3,undefined8 param_4,long param_5,
               long param_6,long param_7)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uStack_a0;
  float fStack_98;
  undefined4 uStack_44;
  
  fVar16 = param_3;
  if ((bRam0000000004f9c8d2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caea20);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cbc138);
    FUN_02132f7c(PTR_DAT_04cbc140);
    FUN_02132f7c(PTR_DAT_04caa1a0);
                    /* try { // try from 024945c8 to 025947db has its CatchHandler @ 024945c8
                       catch() { ... } // from try @ 024945c8 with catch @ 024945c8
                       catch() { ... } // from try @ 0249486c with catch @ 024945c8
                       catch() { ... } // from try @ 02494a4c with catch @ 024945c8
                       catch() { ... } // from try @ 02494a8c with catch @ 024945c8
                       catch() { ... } // from try @ 02494ab8 with catch @ 024945c8 */
    FUN_02132f7c(PTR_DAT_04caead0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    FUN_02132f7c(PTR_DAT_04caea30);
    bRam0000000004f9c8d2 = 1;
  }
  fStack_98 = 0.0;
  uStack_a0 = 0;
  uStack_44 = 0;
  if ((param_6 == 0) || (*(long *)(param_6 + 0x38) == 0)) goto LAB_02494b0c;
  uVar12 = UnityEngine_Transform__get_position_43d0e48(*(long *)(param_6 + 0x38),0);
  if (*(long *)(param_6 + 0x38) == 0) goto LAB_02494b0c;
  fVar18 = fVar16;
  fVar10 = (float)UnityEngine_Transform__get_forward_43d17f4(*(long *)(param_6 + 0x38),0);
  if (cRam0000000004f9b65c == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b65c = '\x01';
  }
  puVar4 = PTR_DAT_04caa200;
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar14 = fVar10 * fVar10;
  fVar15 = SQRT(fVar18 * fVar18 + fVar14);
  if (fVar15 <= _UNK_00e20a08) {
    fVar10 = _UNK_00e20a08;
    fVar15 = fVar14;
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    uVar17 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
    fVar18 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
  }
  else {
    fVar18 = fVar18 / fVar15;
    uVar17 = CONCAT44(0.0 / fVar15,fVar10 / fVar15);
  }
  if ((param_5 == 0) || (lVar7 = *(long *)(param_5 + 0x68), lVar7 == 0)) goto LAB_02494b0c;
  iVar2 = *(int *)(lVar7 + 0x18) + -1;
  fVar14 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                            (lVar7,iVar2,*(undefined8 *)PTR_DAT_04caa1a8);
  if (cRam0000000004f9c959 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9c959 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar6 = PTR_DAT_04caea30;
  if (param_7 == 0) goto LAB_02494b0c;
  fVar15 = fVar16 - fVar15;
  fVar11 = (float)uVar12;
  fVar14 = SQRT(fVar15 * fVar15 +
                (fVar11 - fVar14) * (fVar11 - fVar14) + (0.0 - fVar10) * (0.0 - fVar10));
  fVar10 = (float)Dino_BusSand_View_VehicleView__get_CellWorld_2400ff8(param_7,0);
  if (fVar10 * _UNK_00e20844 < fVar14) {
    lVar7 = *(long *)(param_5 + 0x68);
    if (lVar7 == 0) goto LAB_02494b0c;
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *(long *)PTR_DAT_04caa170;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_02494b0c;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    /* try { // try from 024947dc to 025947e3 has its CatchHandler @ 02494a64 */
      lVar8 = lVar8 + (long)(int)uVar1 * 0xc;
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(float *)(lVar8 + 0x20) = fVar11;
                    /* try { // try from 024947f8 to 0259480f has its CatchHandler @ 02494a68 */
      *(undefined4 *)(lVar8 + 0x24) = 0;
      *(float *)(lVar8 + 0x28) = fVar16;
    }
    else {
      fVar15 = fVar16;
      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                (uVar12,0,fVar16,lVar7,
                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    lVar7 = *(long *)(param_5 + 0x70);
    if (lVar7 == 0) goto LAB_02494b0c;
    fVar10 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                              (lVar7,iVar2,*(undefined8 *)puVar6);
    puVar5 = PTR_DAT_04caea20;
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *(long *)PTR_DAT_04caea20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_02494b0c;
                    /* try { // try from 0249485c to 0259486b has its CatchHandler @ 02494a60 */
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    /* try { // try from 0249486c to 02594a47 has its CatchHandler @ 024945c8 */
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(float *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = fVar14 + fVar10;
    }
    else {
      System_Collections_Generic_List_float___AddWithResize_3ac28c0
                (lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    if (*(long *)(param_6 + 0x38) == 0) goto LAB_02494b0c;
    lVar7 = *(long *)(param_5 + 0x78);
    uVar12 = UnityEngine_Transform__get_forward_43d17f4(*(long *)(param_6 + 0x38),0);
    fVar10 = (float)atan2f(uVar12,fVar15);
    if (lVar7 == 0) goto LAB_02494b0c;
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *(long *)puVar5;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_02494b0c;
    uVar1 = *(uint *)(lVar7 + 0x18);
    fVar10 = fVar10 * _UNK_00e20410;
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(float *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = fVar10;
    }
    else {
      System_Collections_Generic_List_float___AddWithResize_3ac28c0
                (lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  fVar11 = fVar11 - (float)uVar17 * param_1;
  fVar10 = 0.0 - (float)((ulong)uVar17 >> 0x20) * param_1;
  fVar16 = fVar16 - fVar18 * param_1;
  Dino_BusSand_View_ChainRig__TrailAt_2394d78
            (*(undefined4 *)(param_5 + 0x80),param_5,&uStack_a0,&uStack_44);
  fVar18 = fStack_98;
  if (*(char *)(param_5 + 0x35) == '\0') {
    fVar15 = (float)uStack_a0;
    fVar14 = uStack_a0._4_4_;
    if (cRam0000000004f9c959 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9c959 = '\x01';
    }
    fVar15 = fVar15 - fVar11;
    fVar14 = fVar14 - fVar10;
    fVar18 = fVar18 - fVar16;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar13 = param_2;
    if (*(char *)(param_5 + 0x5c) == '\0') {
      fVar13 = *(float *)(param_5 + 0x60);
    }
    if (fVar13 <= SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar18 * fVar18)) {
      if (*(char *)(param_5 + 0x35) == '\0') {
        Dino_BusSand_View_ChainRig__Tug_2394b50(param_7);
      }
      goto LAB_0249494c;
    }
    fVar18 = *(float *)(param_5 + 0x80);
  }
  else {
LAB_0249494c:
    *(undefined1 *)(param_5 + 0x35) = 1;
    if (*(char *)(param_5 + 0x5c) == '\0') {
      fVar15 = *(float *)(param_5 + 0x60) + param_2 * -5.0 * param_3;
      fVar18 = param_2;
      if (param_2 <= fVar15) {
        fVar18 = fVar15;
      }
      *(float *)(param_5 + 0x60) = fVar18;
      bVar3 = fVar18 <= param_2;
      param_2 = fVar18;
      if (bVar3) {
        *(undefined1 *)(param_5 + 0x5c) = 1;
      }
    }
    lVar7 = *(long *)(param_5 + 0x70);
    if (lVar7 == 0) goto LAB_02494b0c;
    fVar18 = *(float *)(param_5 + 0x80);
    fVar15 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                              (lVar7,*(int *)(lVar7 + 0x18) + -1,*(undefined8 *)puVar6);
                    /* try { // try from 02494a48 to 02594a4b has its CatchHandler @ 02494a6c */
                    /* try { // try from 02494a4c to 02594a87 has its CatchHandler @ 024945c8 */
    fVar16 = (float)Dino_BusSand_View_ChainRig__ChordBack_239505c
                              (fVar11,fVar10,fVar16,param_2,fVar15 - param_1,param_5);
    if (fVar18 <= fVar16) {
      fVar18 = fVar16;
    }
    *(float *)(param_5 + 0x80) = fVar18;
  }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249485c with catch @ 02494a60
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024947dc with catch @ 02494a64
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024947f8 with catch @ 02494a68
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02494a48 with catch @ 02494a6c
                        */
  Dino_BusSand_View_ChainRig__TrailAt_2394d78(fVar18,param_5,param_5 + 0x38,param_5 + 0x44);
  puVar5 = PTR_DAT_04cbc140;
  puVar4 = PTR_DAT_04cbc138;
  lVar7 = *(long *)(param_5 + 0x68);
  while (lVar7 != 0) {
                    /* try { // try from 02494a88 to 02594a8b has its CatchHandler @ 02494aac */
                    /* try { // try from 02494a8c to 02594aaf has its CatchHandler @ 024945c8 */
    if (*(int *)(lVar7 + 0x18) < 4) {
      return;
    }
    if (*(long *)(param_5 + 0x70) == 0) break;
    fVar16 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                              (*(long *)(param_5 + 0x70),1,*(undefined8 *)puVar6);
    fVar10 = *(float *)(param_5 + 0x80);
                    /* catch() { ... } // from try @ 02494a88 with catch @ 02494aac */
                    /* try { // try from 02494ab0 to 02594ab7 has its CatchHandler @ 02494ac0 */
                    /* try { // try from 02494ab8 to 02594ac3 has its CatchHandler @ 024945c8 */
    fVar18 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(param_7,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02494ab0 with catch @ 02494ac0
                        */
                    /* try { // try from 02494ac4 to 02594cab has its CatchHandler @ 02494ac4
                       catch() { ... } // from try @ 02494ac4 with catch @ 02494ac4
                       catch() { ... } // from try @ 02494d4c with catch @ 02494ac4
                       catch() { ... } // from try @ 02494d80 with catch @ 02494ac4
                       catch() { ... } // from try @ 02494edc with catch @ 02494ac4
                       catch() { ... } // from try @ 02494f28 with catch @ 02494ac4
                       catch() { ... } // from try @ 02494f44 with catch @ 02494ac4
                       catch() { ... } // from try @ 02494f94 with catch @ 02494ac4
                       catch() { ... } // from try @ 02494fbc with catch @ 02494ac4
                       catch() { ... } // from try @ 02494fe8 with catch @ 02494ac4 */
    if (fVar10 - fVar18 <= fVar16) {
      return;
    }
    if (*(long *)(param_5 + 0x68) == 0) break;
    System_Collections_Generic_List_Vector3___RemoveAt_3afb584
              (*(long *)(param_5 + 0x68),0,*(undefined8 *)puVar5);
    if (*(long *)(param_5 + 0x70) == 0) break;
    System_Collections_Generic_List_float___RemoveAt_3ac4020
              (*(long *)(param_5 + 0x70),0,*(undefined8 *)puVar4);
    if (*(long *)(param_5 + 0x78) == 0) break;
    System_Collections_Generic_List_float___RemoveAt_3ac4020
              (*(long *)(param_5 + 0x78),0,*(undefined8 *)puVar4);
    lVar7 = *(long *)(param_5 + 0x68);
  }
LAB_02494b0c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

