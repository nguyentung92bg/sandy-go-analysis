/* IL2CPP: Dino.BusSand.App.Meta.GoldenGiftState$$ResetForNewRound
void Dino_BusSand_App_Meta_GoldenGiftState__ResetForNewRound (Dino_BusSand_App_Meta_GoldenGiftState_o* __this, int32_t currentLevel, int64_t startTime, int64_t activeDuration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GoldenGiftState$$ResetForNewRound
   void Dino_BusSand_App_Meta_GoldenGiftState__ResetForNewRound
   (Dino_BusSand_App_Meta_GoldenGiftState_o* __this, int32_t currentLevel, int64_t startTime,
   int64_t activeDuration, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GoldenGiftState__ResetForNewRound_223380c
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((bRam0000000004f9be8e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    bRam0000000004f9be8e = 1;
  }
  plVar3 = (long *)(param_1 + 0x30);
  lVar2 = *plVar3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (lVar2 == 0) {
    lVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar2,*(undefined8 *)PTR_DAT_04cad6e8);
    *plVar3 = lVar2;
    thunk_FUN_02134474(plVar3,lVar2);
    lVar2 = *plVar3;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  iVar1 = *(int *)(lVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(lVar2 + 0x18) = 0;
  *(int *)(lVar2 + 0x1c) = iVar1 + 1;
  return;
}

