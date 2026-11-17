/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$HavePassports
bool Dino_BusSand_App_Meta_PassportFeature__HavePassports (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$HavePassports
   bool Dino_BusSand_App_Meta_PassportFeature__HavePassports
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__HavePassports_2245f58(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000004f9bf52 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf52 = 1;
  }
  uVar2 = Dino_BusSand_App_Meta_PassportFeature__IsCheat_2245ecc(param_1);
  puVar1 = PTR_DAT_04caef48;
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)PTR_DAT_04caef48;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    if (*(char *)(*(long *)(lVar3 + 0xb8) + 4) == '\0') {
      lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (0 < *(int *)(lVar3 + 0x18)) {
        return true;
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      return 0 < **(int **)(lVar3 + 0xb8);
    }
  }
  return false;
}

