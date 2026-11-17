/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<Wait>d__11$$MoveNext
bool Dino_BusSand_App_UI_UiMotion__Wait_d__11__MoveNext (Dino_BusSand_App_UI_UiMotion__Wait_d__11_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<Wait>d__11$$MoveNext
   bool Dino_BusSand_App_UI_UiMotion__Wait_d__11__MoveNext
   (Dino_BusSand_App_UI_UiMotion__Wait_d__11_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_UiMotion__Wait_d__11__MoveNext_22a1d08(long param_1)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  
  if ((bRam0000000004f9c263 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c263 = 1;
  }
  puVar1 = PTR_DAT_04cad4c0;
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar3 = *(float *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar2 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
    fVar3 = fVar3 + fVar2;
    *(float *)(param_1 + 0x24) = fVar3;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    fVar3 = 0.0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (*(float *)(param_1 + 0x20) <= fVar3) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

