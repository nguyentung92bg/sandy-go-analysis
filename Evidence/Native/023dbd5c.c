/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier.<Hold>d__122$$MoveNext
bool Dino_BusSand_App_UI_HomeAtelier__Hold_d__122__MoveNext (Dino_BusSand_App_UI_HomeAtelier__Hold_d__122_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier.<Hold>d__122$$MoveNext
   bool Dino_BusSand_App_UI_HomeAtelier__Hold_d__122__MoveNext
   (Dino_BusSand_App_UI_HomeAtelier__Hold_d__122_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HomeAtelier__Hold_d__122__MoveNext_22dbd5c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if ((bRam0000000004f9c3f1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c3f1 = 1;
  }
  puVar1 = PTR_DAT_04cad4c0;
  lVar2 = *(long *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar4 = *(float *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar3 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
    fVar4 = fVar4 + fVar3;
    *(float *)(param_1 + 0x30) = fVar4;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    fVar4 = 0.0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (fVar4 < *(float *)(param_1 + 0x20)) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar2 + 0x9d) == '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  return 0;
}

