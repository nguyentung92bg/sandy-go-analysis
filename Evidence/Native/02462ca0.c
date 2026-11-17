/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$DrawFps
void Dino_BusSand_Cheat_CheatManager__DrawFps (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$DrawFps
   void Dino_BusSand_Cheat_CheatManager__DrawFps (Dino_BusSand_Cheat_CheatManager_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__DrawFps_2362ca0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined8 extraout_d0;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f9c73f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba540);
                    /* try { // try from 02462ce0 to 02562ce7 has its CatchHandler @ 02462fd4 */
    FUN_02132f7c(PTR_DAT_04cba548);
                    /* try { // try from 02462ce8 to 02562daf has its CatchHandler @ 02462ba4 */
    FUN_02132f7c(PTR_DAT_04cba7c8);
    FUN_02132f7c(PTR_DAT_04cab288);
    bRam0000000004f9c73f = 1;
  }
  puVar2 = PTR_DAT_04cba548;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  fVar13 = *(float *)(param_1 + 0xf0);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  fVar10 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  fVar13 = fVar13 + fVar10;
  iVar4 = *(int *)(param_1 + 0xf8) + 1;
  *(int *)(param_1 + 0xf8) = iVar4;
  *(float *)(param_1 + 0xf0) = fVar13;
  if (0.5 <= fVar13) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(float *)(param_1 + 0xf4) = (float)iVar4 / fVar13;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_GUI__get_matrix_4407c34(&uStack_150,0);
  if (cRam0000000004f9b65b == '\0') {
    FUN_02132f7c(PTR_DAT_04caa1f8);
    cRam0000000004f9b65b = '\x01';
  }
                    /* try { // try from 02462db0 to 02562db7 has its CatchHandler @ 02462f80 */
  lVar9 = *(long *)(*(long *)PTR_DAT_04caa1f8 + 0xb8);
  uStack_188 = *(undefined8 *)(lVar9 + 0x48);
  uStack_190 = *(undefined8 *)(lVar9 + 0x40);
  uStack_178 = *(undefined8 *)(lVar9 + 0x58);
  uStack_180 = *(undefined8 *)(lVar9 + 0x50);
                    /* try { // try from 02462dc8 to 02562dd3 has its CatchHandler @ 02462f6c */
  uStack_168 = *(undefined8 *)(lVar9 + 0x68);
  uStack_170 = *(undefined8 *)(lVar9 + 0x60);
  uStack_158 = *(undefined8 *)(lVar9 + 0x78);
  uStack_160 = *(undefined8 *)(lVar9 + 0x70);
  UnityEngine_GUI__set_matrix_4407d0c(&uStack_190,0);
  iVar4 = UnityEngine_Screen__get_height_436a6c8(0);
  iVar4 = iVar4 / 0x2d;
  if (iVar4 < 0x13) {
    iVar4 = 0x12;
  }
  lVar9 = UnityEngine_GUI__get_skin_4407a54(0);
  puVar1 = PTR_DAT_04cba540;
  uVar7 = extraout_d0;
  if (lVar9 != 0) {
    uVar7 = UnityEngine_GUISkin__get_label_4407f24(lVar9,0);
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 02462e3c to 02562e5f has its CatchHandler @ 02462f68 */
    uVar7 = UnityEngine_GUIStyle___ctor_4416f28(lVar9,uVar7,0);
    if (lVar9 != 0) {
      UnityEngine_GUIStyle__set_fontSize_4415914(lVar9,iVar4,0);
                    /* try { // try from 02462e60 to 02562ec7 has its CatchHandler @ 02462ba4 */
      UnityEngine_GUIStyle__set_fontStyle_4415ac4(lVar9,1,0);
      lVar8 = UnityEngine_GUIStyle__get_normal_4414238(lVar9,0);
      puVar3 = PTR_DAT_04cba7c8;
      puVar1 = PTR_DAT_04cab288;
      fVar10 = *(float *)(param_1 + 0xf4);
      if (50.0 <= fVar10) {
        uVar7 = 0;
        uVar12 = 0;
                    /* try { // try from 02462ee4 to 02562eeb has its CatchHandler @ 02462f78 */
        uStack_88 = uStack_148;
        uStack_90 = uStack_150;
        uStack_78 = uStack_138;
        uStack_80 = uStack_140;
        uVar11 = 0x3f800000;
                    /* try { // try from 02462eec to 02562f3b has its CatchHandler @ 02462ba4 */
        uStack_68 = uStack_128;
        uStack_70 = uStack_130;
        uStack_58 = uStack_118;
        uStack_60 = uStack_120;
      }
      else {
        uStack_c8 = uStack_148;
        uStack_d0 = uStack_150;
        uStack_b8 = uStack_138;
        uStack_c0 = uStack_140;
        uVar11 = 0;
        uVar12 = 0;
        if (30.0 <= fVar10) {
          uVar11 = _UNK_00e203c8;
          uVar12 = _UNK_00e2091c;
        }
        uStack_a8 = uStack_128;
        uStack_b0 = uStack_130;
        uStack_98 = uStack_118;
        uStack_a0 = uStack_120;
        uVar7 = 0x3f800000;
                    /* try { // try from 02462ec8 to 02562ecf has its CatchHandler @ 02462f84 */
      }
      uStack_d8 = uStack_118;
      uStack_e0 = uStack_120;
      uStack_e8 = uStack_128;
      uStack_f0 = uStack_130;
      uStack_f8 = uStack_138;
      uStack_100 = uStack_140;
      uStack_108 = uStack_148;
      uStack_110 = uStack_150;
      if (lVar8 != 0) {
        UnityEngine_GUIStyleState__set_textColor_4414288(uVar7,uVar11,uVar12,0x3f800000,lVar8,0);
        iVar5 = UnityEngine_Screen__get_width_436a6a0(0);
        iVar6 = UnityEngine_Screen__get_height_436a6c8(0);
        uVar7 = System_Single__ToString_48426d8((float *)(param_1 + 0xf4),*(undefined8 *)puVar1,0);
                    /* try { // try from 02462f3c to 02562f3f has its CatchHandler @ 02463024 */
                    /* try { // try from 02462f40 to 02562f43 has its CatchHandler @ 02462f7c */
        uVar7 = System_String__Concat_46c82e0(uVar7,*(undefined8 *)puVar3,0);
                    /* try { // try from 02462f44 to 02562f47 has its CatchHandler @ 02462f74 */
        lVar8 = *(long *)puVar2;
                    /* try { // try from 02462f48 to 02562f4b has its CatchHandler @ 02462f70 */
                    /* try { // try from 02462f4c to 02562f4f has its CatchHandler @ 02462f64 */
                    /* try { // try from 02462f50 to 02562f53 has its CatchHandler @ 02462f60 */
        if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* try { // try from 02462f54 to 02562f57 has its CatchHandler @ 02462f5c */
                    /* try { // try from 02462f58 to 02562f9f has its CatchHandler @ 02462ba4 */
          thunk_FUN_0218fdac(lVar8);
        }
                    /* catch() { ... } // from try @ 02462f54 with catch @ 02462f5c */
                    /* catch() { ... } // from try @ 02462f50 with catch @ 02462f60 */
                    /* catch() { ... } // from try @ 02462f4c with catch @ 02462f64 */
                    /* catch() { ... } // from try @ 02462e3c with catch @ 02462f68 */
                    /* catch() { ... } // from try @ 02462dc8 with catch @ 02462f6c */
                    /* catch() { ... } // from try @ 02462f48 with catch @ 02462f70 */
                    /* catch() { ... } // from try @ 02462f44 with catch @ 02462f74 */
                    /* catch() { ... } // from try @ 02462ee4 with catch @ 02462f78 */
                    /* catch() { ... } // from try @ 02462f40 with catch @ 02462f7c */
                    /* catch() { ... } // from try @ 02462db0 with catch @ 02462f80 */
                    /* catch() { ... } // from try @ 02462ec8 with catch @ 02462f84 */
                    /* try { // try from 02462fa0 to 02562fa3 has its CatchHandler @ 02462fc4 */
        UnityEngine_GUI__Label_4407fe8
                  ((float)iVar5 * _UNK_00e20840,(float)iVar6 * _UNK_00e1fef8,(float)iVar4 * 8.0,
                   (float)iVar4 * _UNK_00e205ec,uVar7,lVar9,0);
                    /* try { // try from 02462fa4 to 02562fc7 has its CatchHandler @ 02462ba4 */
        uStack_1c8 = uStack_108;
        uStack_1d0 = uStack_110;
        uStack_1b8 = uStack_f8;
        uStack_1c0 = uStack_100;
        uStack_1a8 = uStack_e8;
        uStack_1b0 = uStack_f0;
        uStack_198 = uStack_d8;
        uStack_1a0 = uStack_e0;
        UnityEngine_GUI__set_matrix_4407d0c(&uStack_1d0,0);
                    /* catch() { ... } // from try @ 02462fa0 with catch @ 02462fc4 */
                    /* try { // try from 02462fc8 to 02562fcf has its CatchHandler @ 02463078 */
                    /* try { // try from 02462fd0 to 02562fef has its CatchHandler @ 02462ba4 */
                    /* catch() { ... } // from try @ 02462ce0 with catch @ 02462fd4 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224(uVar7);
}

