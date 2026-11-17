/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$DrawConfirm
void Dino_BusSand_Cheat_CheatManager__DrawConfirm (Dino_BusSand_Cheat_CheatManager_o* __this, float vw, float vh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$DrawConfirm
   void Dino_BusSand_Cheat_CheatManager__DrawConfirm (Dino_BusSand_Cheat_CheatManager_o* __this,
   float vw, float vh, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__DrawConfirm_2362570(float param_1,float param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar1 = PTR_DAT_04cba558;
                    /* try { // try from 02462590 to 02562597 has its CatchHandler @ 02462610 */
  if ((bRam0000000004f9c748 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba558);
    FUN_02132f7c(PTR_DAT_04cba770);
                    /* try { // try from 024625b8 to 025625c7 has its CatchHandler @ 02462608 */
    FUN_02132f7c(PTR_DAT_04cba778);
                    /* try { // try from 024625c8 to 025625fb has its CatchHandler @ 02462438 */
    FUN_02132f7c(PTR_DAT_04cba780);
    FUN_02132f7c(PTR_DAT_04cb8708);
    FUN_02132f7c(PTR_DAT_04cba788);
    FUN_02132f7c(PTR_DAT_04cba790);
    bRam0000000004f9c748 = 1;
  }
                    /* try { // try from 024625fc to 025625ff has its CatchHandler @ 02462658 */
                    /* try { // try from 02462600 to 02562603 has its CatchHandler @ 0246260c */
                    /* try { // try from 02462604 to 0256262b has its CatchHandler @ 02462438 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024625b8 with catch @ 02462608
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02462600 with catch @ 0246260c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02462590 with catch @ 02462610
                        */
                    /* try { // try from 0246262c to 0256262f has its CatchHandler @ 02462648 */
                    /* try { // try from 02462630 to 0256264b has its CatchHandler @ 02462438 */
  UnityEngine_GUILayout__BeginArea_44103e8
            ((param_1 + -360.0) * 0.5,param_2 * _UNK_00e20590,0x43b40000,0x43160000,
             *(undefined8 *)(param_3 + 0x98),0);
  lVar11 = *(long *)puVar1;
  uVar9 = *(undefined8 *)(param_3 + 0xa0);
  lVar8 = *(long *)(lVar11 + 0x38);
  if (lVar8 == 0) {
                    /* catch() { ... } // from try @ 0246262c with catch @ 02462648 */
                    /* try { // try from 0246264c to 02562653 has its CatchHandler @ 024626a8 */
    FUN_0216b4cc(lVar11);
    lVar8 = *(long *)(lVar11 + 0x38);
  }
                    /* try { // try from 02462654 to 02562677 has its CatchHandler @ 02462438 */
  lVar8 = *(long *)(lVar8 + 0x10);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024625fc with catch @ 02462658
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02462510 with catch @ 0246265c
                        */
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cba778;
                    /* try { // try from 02462678 to 0256267b has its CatchHandler @ 02462694 */
                    /* try { // try from 0246267c to 02562697 has its CatchHandler @ 02462438 */
  lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
                    /* catch() { ... } // from try @ 02462678 with catch @ 02462694 */
                    /* try { // try from 02462698 to 0256269f has its CatchHandler @ 024626a8 */
                    /* try { // try from 024626a0 to 025626ab has its CatchHandler @ 02462438 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0246264c with catch @ 024626a8
                       catch(type#2 @ 00000000) { ... } // from try @ 02462698 with catch @ 024626a8
                        */
  UnityEngine_GUILayout__Label_440ef38
            (*(undefined8 *)puVar2,uVar9,**(undefined8 **)(lVar8 + 0xb8),0);
  puVar3 = PTR_DAT_04cba790;
  puVar2 = PTR_DAT_04cba770;
                    /* try { // try from 024626ac to 0256278b has its CatchHandler @ 024626ac
                       catch() { ... } // from try @ 024626ac with catch @ 024626ac
                       catch() { ... } // from try @ 024627dc with catch @ 024626ac
                       catch() { ... } // from try @ 0246288c with catch @ 024626ac
                       catch() { ... } // from try @ 024628c8 with catch @ 024626ac
                       catch() { ... } // from try @ 02462914 with catch @ 024626ac
                       catch() { ... } // from try @ 02462938 with catch @ 024626ac
                       catch() { ... } // from try @ 02462964 with catch @ 024626ac */
  if (*(long *)(param_3 + 0x100) == 0) {
LAB_024629a4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar9 = Dino_BusSand_Cheat_CheatConfig__KeysOf_235b1c4(*(long *)(param_3 + 0x100),0xd);
  uVar9 = System_String__Concat_46d2b84(*(undefined8 *)puVar2,uVar9,*(undefined8 *)puVar3,0);
  lVar11 = *(long *)puVar1;
  uVar10 = *(undefined8 *)(param_3 + 0xa8);
  lVar8 = *(long *)(lVar11 + 0x38);
  if (lVar8 == 0) {
    FUN_0216b4cc(lVar11);
    lVar8 = *(long *)(lVar11 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  UnityEngine_GUILayout__Label_440ef38(uVar9,uVar10,**(undefined8 **)(lVar8 + 0xb8),0);
  lVar11 = *(long *)puVar1;
  lVar8 = *(long *)(lVar11 + 0x38);
  if (lVar8 == 0) {
    FUN_0216b4cc(lVar11);
    lVar8 = *(long *)(lVar11 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0246278c to 02562793 has its CatchHandler @ 024628e4 */
  lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
                    /* try { // try from 024627a8 to 025627af has its CatchHandler @ 024628dc */
  UnityEngine_GUILayout__BeginHorizontal_440fbac(**(undefined8 **)(lVar8 + 0xb8),0);
  lVar11 = *(long *)puVar1;
  uVar9 = *(undefined8 *)(param_3 + 0xb8);
  lVar8 = *(long *)(lVar11 + 0x38);
  if (lVar8 == 0) {
    FUN_0216b4cc(lVar11);
    lVar8 = *(long *)(lVar11 + 0x38);
  }
                    /* try { // try from 024627d0 to 025627db has its CatchHandler @ 024628cc */
  lVar8 = *(long *)(lVar8 + 0x10);
                    /* try { // try from 024627dc to 02562857 has its CatchHandler @ 024626ac */
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb8708;
  lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  uVar5 = UnityEngine_GUILayout__Button_440f190
                    (*(undefined8 *)puVar2,uVar9,**(undefined8 **)(lVar8 + 0xb8),0);
  if ((uVar5 & 1) != 0) {
    Dino_BusSand_Cheat_CheatManager__DoReset_2364a64(param_3);
  }
  lVar11 = *(long *)puVar1;
  uVar9 = *(undefined8 *)(param_3 + 0xb8);
  lVar8 = *(long *)(lVar11 + 0x38);
  if (lVar8 == 0) {
    FUN_0216b4cc(lVar11);
    lVar8 = *(long *)(lVar11 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
                    /* try { // try from 02462858 to 0256285f has its CatchHandler @ 02462918 */
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cba780;
  lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
                    /* try { // try from 0246287c to 0256288b has its CatchHandler @ 024628d4 */
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                    /* try { // try from 0246288c to 025628bb has its CatchHandler @ 024626ac */
    lVar8 = FUN_0216b470();
  }
  uVar5 = UnityEngine_GUILayout__Button_440f190
                    (*(undefined8 *)puVar1,uVar9,**(undefined8 **)(lVar8 + 0xb8),0);
  puVar1 = PTR_DAT_04cba788;
  if ((uVar5 & 1) != 0) {
    *(undefined1 *)(param_3 + 0x122) = 0;
                    /* try { // try from 024628bc to 025628bf has its CatchHandler @ 024628e0 */
                    /* try { // try from 024628c0 to 025628c3 has its CatchHandler @ 024628d8 */
    Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_3,*(undefined8 *)puVar1);
  }
                    /* try { // try from 024628c4 to 025628c7 has its CatchHandler @ 024628d0 */
                    /* try { // try from 024628c8 to 025628ff has its CatchHandler @ 024626ac */
  UnityEngine_GUILayout__EndHorizontal_4410100(0);
                    /* catch() { ... } // from try @ 024627d0 with catch @ 024628cc */
                    /* catch() { ... } // from try @ 024628c4 with catch @ 024628d0 */
  UnityEngine_GUILayout__EndArea_441093c(0);
                    /* catch() { ... } // from try @ 0246287c with catch @ 024628d4 */
                    /* catch() { ... } // from try @ 024628c0 with catch @ 024628d8 */
  lVar8 = UnityEngine_Event__get_current_4404580(0);
                    /* catch() { ... } // from try @ 024627a8 with catch @ 024628dc */
                    /* catch() { ... } // from try @ 024628bc with catch @ 024628e0 */
  if (*(char *)(param_3 + 0x122) != '\0') {
                    /* catch() { ... } // from try @ 0246278c with catch @ 024628e4 */
    if (lVar8 == 0) goto LAB_024629a4;
    iVar4 = UnityEngine_Event__get_type_44039d0(lVar8,0);
    if (iVar4 == 4) {
                    /* try { // try from 02462900 to 02562903 has its CatchHandler @ 02462908 */
                    /* catch() { ... } // from try @ 02462900 with catch @ 02462908 */
      iVar4 = UnityEngine_Event__get_keyCode_44037d0(lVar8,0);
                    /* try { // try from 0246290c to 02562913 has its CatchHandler @ 0246296c */
                    /* try { // try from 02462914 to 02562933 has its CatchHandler @ 024626ac */
                    /* catch() { ... } // from try @ 02462858 with catch @ 02462918 */
                    /* try { // try from 02462934 to 02562937 has its CatchHandler @ 02462958 */
                    /* try { // try from 02462938 to 0256295b has its CatchHandler @ 024626ac */
      if (((iVar4 == 0xd) ||
          (iVar4 = UnityEngine_Event__get_keyCode_44037d0(lVar8,0), iVar4 == 0x10f)) ||
         (uVar5 = Dino_BusSand_Cheat_CheatManager__IsBinding_2364b74(param_3,lVar8,0xd),
         (uVar5 & 1) != 0)) {
        Dino_BusSand_Cheat_CheatManager__DoReset_2364a64(param_3);
      }
      else {
                    /* try { // try from 02462964 to 0256296f has its CatchHandler @ 024626ac */
        iVar4 = UnityEngine_Event__get_keyCode_44037d0(lVar8,0);
        puVar1 = PTR_DAT_04cba788;
                    /* catch() { ... } // from try @ 0246290c with catch @ 0246296c
                       catch() { ... } // from try @ 0246295c with catch @ 0246296c */
                    /* try { // try from 02462970 to 02562a23 has its CatchHandler @ 02462970
                       catch() { ... } // from try @ 02462970 with catch @ 02462970
                       catch() { ... } // from try @ 02462a2c with catch @ 02462970
                       catch() { ... } // from try @ 02462aac with catch @ 02462970
                       catch() { ... } // from try @ 02462ad4 with catch @ 02462970
                       catch() { ... } // from try @ 02462b00 with catch @ 02462970 */
        if (iVar4 != 0x1b) {
          return;
        }
        *(undefined1 *)(param_3 + 0x122) = 0;
        Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_3,*(undefined8 *)puVar1);
      }
                    /* catch() { ... } // from try @ 02462934 with catch @ 02462958 */
                    /* try { // try from 0246295c to 02562963 has its CatchHandler @ 0246296c */
      if ((bRam0000000004fa9885 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9af8,0);
        FUN_02132f7c(PTR_DAT_04cc58e0);
        FUN_02132f7c(PTR_DAT_04ca9c20);
        FUN_02132f7c(PTR_DAT_04cf8c60);
        bRam0000000004fa9885 = 1;
      }
      iVar4 = UnityEngine_Event__get_type_44039d0(lVar8);
      if ((iVar4 == 7) || (iVar4 = UnityEngine_Event__get_type_44039d0(lVar8), iVar4 == 8)) {
        puVar1 = PTR_DAT_04cc58e0;
        plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
        UnityEngine_Event__get_type_44039d0(lVar8);
        lVar11 = FUN_02133100(*(undefined8 *)puVar1,&stack0xffffffffffffffcc);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((lVar11 != 0) &&
           (lVar7 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar9,0);
        }
        puVar2 = PTR_DAT_04cf8c60;
        puVar1 = PTR_DAT_04ca9af8;
        if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar6[4] = lVar11;
        thunk_FUN_02134474(plVar6 + 4,lVar11);
        uVar9 = UnityEngine_UnityString__Format_445a59c(*(undefined8 *)puVar2,plVar6,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        UnityEngine_Debug__LogWarning_4357a30(uVar9,0);
      }
      UnityEngine_Event__Internal_Use_4403e10(lVar8);
      return;
    }
  }
  return;
}

