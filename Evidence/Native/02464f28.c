/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Boot
void Dino_BusSand_Cheat_CheatManager__Boot (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Boot
   void Dino_BusSand_Cheat_CheatManager__Boot (const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__Boot_2364f28(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack_14;
  
  puVar1 = PTR_DAT_04caa210;
  if ((bRam0000000004f9c74f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cba8d8);
    FUN_02132f7c(PTR_DAT_04cba8e0);
    FUN_02132f7c(PTR_DAT_04cba8e8);
    bRam0000000004f9c74f = 1;
  }
  uStack_14 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Application__get_isMobilePlatform_4352d28(0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Debug__get_isDebugBuild_4362220(0);
    if ((uVar2 & 1) != 0) {
      uVar3 = UnityEngine_GameObject__Find_43c2414(*(undefined8 *)PTR_DAT_04cba8e8,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
                    /* try { // try from 02465034 to 02565167 has its CatchHandler @ 02465034
                       catch() { ... } // from try @ 02465034 with catch @ 02465034
                       catch() { ... } // from try @ 02465170 with catch @ 02465034
                       catch() { ... } // from try @ 02465364 with catch @ 02465034
                       catch() { ... } // from try @ 0246536c with catch @ 02465034
                       catch() { ... } // from try @ 02465394 with catch @ 02465034
                       catch() { ... } // from try @ 024653b8 with catch @ 02465034 */
        if (*(int *)(*(long *)PTR_DAT_04cba8d8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uStack_14 = UnityEngine_SceneManagement_SceneManager__GetActiveScene_43d9c38(0);
        lVar4 = UnityEngine_SceneManagement_Scene__get_name_43d9394(&uStack_14,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar2 = System_String__StartsWith_46d117c(lVar4,*(undefined8 *)PTR_DAT_04cba8e0,0);
        if ((uVar2 & 1) != 0) {
          return;
        }
      }
      if (*(int *)(*(long *)PTR_DAT_04cba458 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Cheat_CheatManager__Ensure_23650a4();
    }
  }
  return;
}

