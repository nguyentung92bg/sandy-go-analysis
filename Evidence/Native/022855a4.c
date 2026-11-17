/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<RunThen>d__17$$MoveNext
bool Dino_BusSand_App_UI_LevelEnterFlow__RunThen_d__17__MoveNext (Dino_BusSand_App_UI_LevelEnterFlow__RunThen_d__17_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<RunThen>d__17$$MoveNext
   bool Dino_BusSand_App_UI_LevelEnterFlow__RunThen_d__17__MoveNext
   (Dino_BusSand_App_UI_LevelEnterFlow__RunThen_d__17_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_LevelEnterFlow__RunThen_d__17__MoveNext_21855a4(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    lVar2 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  }
  return iVar1 == 0;
}

