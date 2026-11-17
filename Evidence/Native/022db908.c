/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$RunGuide
void Dino_BusSand_App_UI_PassportUi__RunGuide (System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$RunGuide
   void Dino_BusSand_App_UI_PassportUi__RunGuide (System_Action_o* done, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_PassportUi__RunGuide_21db908(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_DAT_04cb0a20;
  if ((bRam0000000004f9bb87 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 022db948 to 023db94b has its CatchHandler @ 022dbb3c */
    FUN_02132f7c(PTR_DAT_04cb0920);
                    /* try { // try from 022db954 to 023db95f has its CatchHandler @ 022dbb5c */
    FUN_02132f7c(PTR_DAT_04cb0a28);
                    /* try { // try from 022db960 to 023db97f has its CatchHandler @ 022dbb4c */
    FUN_02132f7c(PTR_DAT_04cb0a20);
    FUN_02132f7c(PTR_DAT_04cb0a30);
                    /* try { // try from 022db980 to 023db98b has its CatchHandler @ 022db6c0 */
    FUN_02132f7c(PTR_DAT_04cb0a38);
                    /* try { // try from 022db98c to 023db99f has its CatchHandler @ 022dbb48 */
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb0a40);
    FUN_02132f7c(PTR_DAT_04cb0a48);
    bRam0000000004f9bb87 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar4,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar4 != 0) {
    plVar8 = (long *)(lVar4 + 0x18);
    *plVar8 = param_1;
    thunk_FUN_02134474(plVar8,param_1);
    Dino_BusSand_App_UI_PassportUi__Install_21dad80();
    if (cRam0000000004f9b94d == '\0') {
                    /* try { // try from 022db9f8 to 023dba0b has its CatchHandler @ 022dbb24 */
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    lVar7 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    lVar5 = Dino_BusSand_App_UI_PassportUi__get_F_21daeb0();
                    /* try { // try from 022dba24 to 023dba27 has its CatchHandler @ 022dbb8c */
    plVar10 = (long *)(lVar4 + 0x10);
    *plVar10 = lVar5;
    thunk_FUN_02134474(plVar10,lVar5);
                    /* try { // try from 022dba38 to 023dba4b has its CatchHandler @ 022dbb0c */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
    if (((uVar6 & 1) != 0) || (*plVar10 == 0)) {
      lVar5 = *plVar8;
      if (lVar5 == 0) {
        return;
      }
LAB_022dbbc8:
                    /* WARNING: Could not recover jumptable at 0x022dbbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      return;
    }
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 022dba74 to 023dba87 has its CatchHandler @ 022dbaf4 */
    System_Action___ctor_47b5ed0(lVar5,lVar4,*(undefined8 *)PTR_DAT_04cb0a28,0);
    if (lVar7 != 0) {
      lVar4 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                        (lVar7,*(undefined8 *)PTR_DAT_04cb0a30);
                    /* try { // try from 022dbab0 to 023dbac3 has its CatchHandler @ 022dbadc */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
                    /* try { // try from 022dbac4 to 023dbb8f has its CatchHandler @ 022db6c0 */
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
      uVar9 = 0;
      if ((uVar6 & 1) != 0) {
        if (lVar4 == 0) goto LAB_022dbbbc;
                    /* catch() { ... } // from try @ 022dbab0 with catch @ 022dbadc */
        uVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar4,*(undefined8 *)PTR_DAT_04cb0a48,0);
      }
                    /* catch() { ... } // from try @ 022dba74 with catch @ 022dbaf4 */
      if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 022dba38 with catch @ 022dbb0c */
      puVar3 = PTR_DAT_04cb0a40;
      uVar6 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(*(undefined8 *)PTR_DAT_04cb0a40,0);
      uVar11 = 0;
                    /* catch() { ... } // from try @ 022db9f8 with catch @ 022dbb24 */
      if ((uVar6 & 1) != 0) {
        lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb0920);
                    /* catch() { ... } // from try @ 022db948 with catch @ 022dbb3c */
        System_Object___ctor_4870e5c(lVar4,0);
        if (lVar4 == 0) goto LAB_022dbbbc;
                    /* catch() { ... } // from try @ 022db98c with catch @ 022dbb48 */
                    /* catch() { ... } // from try @ 022db960 with catch @ 022dbb4c */
        *(undefined8 *)(lVar4 + 0x10) = uVar9;
        thunk_FUN_02134474((undefined8 *)(lVar4 + 0x10),uVar9);
                    /* catch() { ... } // from try @ 022db954 with catch @ 022dbb5c */
        *(long *)(lVar4 + 0x18) = lVar5;
        thunk_FUN_02134474((long *)(lVar4 + 0x18),lVar5);
        puVar2 = PTR_DAT_04cb0a38;
        uVar9 = *(undefined8 *)puVar3;
        *(undefined1 *)(lVar4 + 0x20) = 1;
                    /* catch() { ... } // from try @ 022db86c with catch @ 022dbb8c
                       catch() { ... } // from try @ 022dba24 with catch @ 022dbb8c */
        uVar11 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                           (lVar7,uVar9,2,lVar4,*(undefined8 *)puVar2);
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 022dbba0 to 023dbd47 has its CatchHandler @ 022dbba0
                       catch() { ... } // from try @ 022dbba0 with catch @ 022dbba0
                       catch() { ... } // from try @ 022dbe5c with catch @ 022dbba0
                       catch() { ... } // from try @ 022dbf9c with catch @ 022dbba0 */
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
      if ((uVar6 & 1) == 0) {
        return;
      }
      if (lVar5 != 0) goto LAB_022dbbc8;
    }
  }
LAB_022dbbbc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

