/* IL2CPP: Dino.BusSand.App.Meta.GameplayTuning$$get_VehicleSpeed
float Dino_BusSand_App_Meta_GameplayTuning__get_VehicleSpeed (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.GameplayTuning$$get_VehicleSpeed
   float Dino_BusSand_App_Meta_GameplayTuning__get_VehicleSpeed (const MethodInfo* method); */

float Dino_BusSand_App_Meta_GameplayTuning__get_VehicleSpeed_221b1b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9bd83 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb2828);
    FUN_02132f7c(PTR_DAT_04cb2830);
    FUN_02132f7c(PTR_DAT_04cb2838);
    bRam0000000004f9bd83 = 1;
  }
  puVar3 = PTR_DAT_04cb2838;
  puVar2 = PTR_DAT_04cb2830;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Tables__Row_215ee18(*(undefined8 *)puVar2,*(undefined8 *)puVar3,0);
  fVar7 = _UNK_00e20838;
  if (lVar4 != 0) {
    uVar5 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar4,*(undefined8 *)PTR_DAT_04cb2828,0);
    fVar6 = (float)Dino_BusSand_App_MiniJson__Float_21563fc(_UNK_00e20838,uVar5,0);
    fVar8 = 3.0;
    if (fVar6 <= 3.0) {
      fVar8 = fVar6;
    }
    fVar7 = 0.5;
    if (0.5 <= fVar6) {
      fVar7 = fVar8;
    }
  }
  return fVar7;
}

