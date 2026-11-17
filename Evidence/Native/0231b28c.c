/* IL2CPP: Dino.BusSand.App.Meta.GameplayTuning$$Apply
void Dino_BusSand_App_Meta_GameplayTuning__Apply (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameplayTuning$$Apply
   void Dino_BusSand_App_Meta_GameplayTuning__Apply (const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameplayTuning__Apply_221b28c(void)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  
  puVar1 = PTR_DAT_04cac568;
  if ((bRam0000000004f9bd84 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac568);
    bRam0000000004f9bd84 = 1;
  }
  fVar3 = (float)Dino_BusSand_App_Meta_GameplayTuning__get_VehicleSpeed_221b1b4();
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  **(double **)(lVar2 + 0xb8) = (double)fVar3;
  return;
}

