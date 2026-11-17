/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$DrawJumpBox
void Dino_BusSand_Cheat_CheatManager__DrawJumpBox (Dino_BusSand_Cheat_CheatManager_o* __this, float vw, float vh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$DrawJumpBox
   void Dino_BusSand_Cheat_CheatManager__DrawJumpBox (Dino_BusSand_Cheat_CheatManager_o* __this,
   float vw, float vh, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__DrawJumpBox_23622f0(float param_1,float param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar3 = PTR_DAT_04cba558;
                    /* try { // try from 02462300 to 02562303 has its CatchHandler @ 02462328 */
                    /* try { // try from 02462304 to 0256232b has its CatchHandler @ 02461d48 */
  if ((bRam0000000004f9c747 & 1) == 0) {
                    /* catch() { ... } // from try @ 02462300 with catch @ 02462328 */
                    /* try { // try from 0246232c to 02562333 has its CatchHandler @ 02462434 */
    FUN_02132f7c(PTR_DAT_04cba558);
                    /* try { // try from 02462334 to 02562353 has its CatchHandler @ 02461d48 */
                    /* catch() { ... } // from try @ 02461f20 with catch @ 02462338 */
    FUN_02132f7c(PTR_DAT_04cba758);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cba760);
                    /* try { // try from 02462354 to 02562357 has its CatchHandler @ 02462374 */
                    /* try { // try from 02462358 to 02562377 has its CatchHandler @ 02461d48 */
    FUN_02132f7c(PTR_DAT_04cba768);
    bRam0000000004f9c747 = 1;
  }
                    /* catch() { ... } // from try @ 02462354 with catch @ 02462374 */
                    /* try { // try from 02462378 to 0256237f has its CatchHandler @ 02462434 */
                    /* try { // try from 02462380 to 0256239f has its CatchHandler @ 02461d48 */
                    /* catch() { ... } // from try @ 024620e8 with catch @ 02462384 */
                    /* try { // try from 024623a0 to 025623a3 has its CatchHandler @ 024623c8 */
  UnityEngine_GUILayout__BeginArea_44103e8
            ((param_1 + -320.0) * 0.5,param_2 * _UNK_00e20590,0x43a00000,0x43020000,
             *(undefined8 *)(param_3 + 0x98),0);
                    /* try { // try from 024623a4 to 025623cb has its CatchHandler @ 02461d48 */
  lVar9 = *(long *)puVar3;
  uVar7 = *(undefined8 *)(param_3 + 0xa0);
  lVar6 = *(long *)(lVar9 + 0x38);
  if (lVar6 == 0) {
    FUN_0216b4cc(lVar9);
    lVar6 = *(long *)(lVar9 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
                    /* catch() { ... } // from try @ 024623a0 with catch @ 024623c8 */
                    /* try { // try from 024623cc to 025623d3 has its CatchHandler @ 02462434 */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0216b470();
  }
                    /* try { // try from 024623d4 to 025623f3 has its CatchHandler @ 02461d48 */
                    /* catch() { ... } // from try @ 02461e7c with catch @ 024623d8 */
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = (undefined8 *)PTR_DAT_04cba760;
  puVar4 = PTR_DAT_04cba758;
  puVar2 = PTR_DAT_04cab270;
  lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                    /* try { // try from 024623f4 to 025623f7 has its CatchHandler @ 02462420 */
                    /* try { // try from 024623f8 to 02562423 has its CatchHandler @ 02461d48 */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0216b470();
  }
                    /* catch() { ... } // from try @ 024623f4 with catch @ 02462420 */
                    /* try { // try from 02462424 to 0256242b has its CatchHandler @ 02462434 */
  UnityEngine_GUILayout__Label_440ef38
            (*(undefined8 *)puVar4,uVar7,**(undefined8 **)(lVar6 + 0xb8),0);
                    /* try { // try from 0246242c to 02562437 has its CatchHandler @ 02461d48 */
  fVar10 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
                    /* catch() { ... } // from try @ 024622d8 with catch @ 02462434
                       catch() { ... } // from try @ 0246232c with catch @ 02462434
                       catch() { ... } // from try @ 02462378 with catch @ 02462434
                       catch() { ... } // from try @ 024623cc with catch @ 02462434
                       catch() { ... } // from try @ 02462424 with catch @ 02462434 */
                    /* try { // try from 02462438 to 0256250f has its CatchHandler @ 02462438
                       catch() { ... } // from try @ 02462438 with catch @ 02462438
                       catch() { ... } // from try @ 02462518 with catch @ 02462438
                       catch() { ... } // from try @ 024625c8 with catch @ 02462438
                       catch() { ... } // from try @ 02462604 with catch @ 02462438
                       catch() { ... } // from try @ 02462630 with catch @ 02462438
                       catch() { ... } // from try @ 02462654 with catch @ 02462438
                       catch() { ... } // from try @ 0246267c with catch @ 02462438
                       catch() { ... } // from try @ 024626a0 with catch @ 02462438 */
  fVar10 = fVar10 - (float)(int)fVar10;
  fVar12 = 1.0;
  if (fVar10 <= 1.0) {
    fVar12 = fVar10;
  }
  fVar11 = 0.0;
  if (0.0 <= fVar10) {
    fVar11 = fVar12;
  }
  if (_UNK_00e208e8 <= fVar11) {
    puVar1 = (undefined8 *)puVar2;
  }
  uVar7 = System_String__Concat_46c82e0(*(undefined8 *)(param_3 + 0x128),*puVar1,0);
  lVar9 = *(long *)puVar3;
  uVar8 = *(undefined8 *)(param_3 + 0xd0);
  lVar6 = *(long *)(lVar9 + 0x38);
  if (lVar6 == 0) {
    FUN_0216b4cc(lVar9);
    lVar6 = *(long *)(lVar9 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0216b470();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0216b470();
  }
  UnityEngine_GUILayout__Label_440ef38(uVar7,uVar8,**(undefined8 **)(lVar6 + 0xb8),0);
  lVar9 = *(long *)puVar3;
  uVar7 = *(undefined8 *)(param_3 + 0xb0);
  lVar6 = *(long *)(lVar9 + 0x38);
  if (lVar6 == 0) {
    FUN_0216b4cc(lVar9);
    lVar6 = *(long *)(lVar9 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0216b470();
  }
                    /* try { // try from 02462510 to 02562517 has its CatchHandler @ 0246265c */
  if (*(int *)(lVar6 + 0xe4) == 0) {
                    /* try { // try from 02462518 to 0256258f has its CatchHandler @ 02462438 */
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cba768;
  lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0216b470();
  }
  UnityEngine_GUILayout__Label_440ef38
            (*(undefined8 *)puVar3,uVar7,**(undefined8 **)(lVar6 + 0xb8),0);
  puVar3 = PTR_DAT_04cc1368;
  if ((bRam0000000004fa9a9f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf8d40);
    FUN_02132f7c(PTR_DAT_04cc1368);
    FUN_02132f7c(PTR_DAT_04cba548);
    bRam0000000004fa9a9f = 1;
  }
  puVar2 = PTR_DAT_04cf8d40;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_GUIUtility__CheckOnGUI_44078c8();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_GUILayoutUtility__EndLayoutArea_4410a2c();
  puVar3 = PTR_DAT_04cf4608;
  if ((bRam0000000004fa9880 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf4608);
    bRam0000000004fa9880 = 1;
  }
  if (*(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) != 0) {
    iVar5 = UnityEngine_Event__get_type_44039d0();
    if (iVar5 == 0xc) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04cba548 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar3 = PTR_DAT_04cc1368;
    if ((bRam0000000004fa99e9 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cc1368);
      bRam0000000004fa99e9 = 1;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_GUIUtility__CheckOnGUI_44078c8();
    if (pcRam0000000004fa9a40 == (code *)0x0) {
      pcRam0000000004fa9a40 = (code *)FUN_02132f40(&UNK_00e49681);
    }
                    /* WARNING: Could not recover jumptable at 0x0450bef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa9a40)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

