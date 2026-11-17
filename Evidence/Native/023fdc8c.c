/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$ShouldShowLocked
bool Dino_BusSand_App_UI_MainHudPanel__ShouldShowLocked (int32_t act, int32_t level, int32_t unlock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$ShouldShowLocked
   bool Dino_BusSand_App_UI_MainHudPanel__ShouldShowLocked (int32_t act, int32_t level, int32_t
   unlock, const MethodInfo* method); */

bool Dino_BusSand_App_UI_MainHudPanel__ShouldShowLocked_22fdc8c
               (undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int iStack_34;
  
  puVar1 = PTR_DAT_04cae520;
  if ((bRam0000000004f9c4b6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb44e8);
    FUN_02132f7c(PTR_DAT_04cae520);
    bRam0000000004f9c4b6 = 1;
  }
  lVar3 = *(long *)puVar1;
  iStack_34 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    uVar4 = System_Collections_Generic_Dictionary_int__int___TryGetValue_342ea24
                      (**(long **)(lVar3 + 0xb8),param_1,&iStack_34,*(undefined8 *)PTR_DAT_04cb44e8)
    ;
    if (((uVar4 & 1) == 0) || (iStack_34 < 1)) {
      bVar2 = false;
    }
    else {
      bVar2 = param_3 - iStack_34 <= param_2;
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

