/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$SetForceCloseOpen
void Dino_BusSand_App_Meta_PassportFeature__SetForceCloseOpen (Dino_BusSand_App_Meta_PassportFeature_o* __this, bool v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$SetForceCloseOpen
   void Dino_BusSand_App_Meta_PassportFeature__SetForceCloseOpen
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, bool v, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__SetForceCloseOpen_22491e8
               (undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf7d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf7d = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  puVar2 = PTR_DAT_04cb0558;
  puVar1 = PTR_DAT_04caef48;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(byte *)(lVar3 + 0x70) = param_2 & 1;
  Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar2);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023492a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    return;
  }
  return;
}

