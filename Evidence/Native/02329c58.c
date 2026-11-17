/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$DeclinePlayed
bool Dino_BusSand_App_Meta_ClimbTowerFeature__DeclinePlayed (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$DeclinePlayed
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__DeclinePlayed
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_ClimbTowerFeature__DeclinePlayed_2229c58(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04caf910;
  if ((bRam0000000004f9be22 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be22 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x40);
    lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar1);
    if ((lVar3 != 0) && (lVar4 != 0)) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        iVar2 = System_Array__IndexOf_int__297cf74
                          (*(undefined8 *)(lVar4 + 0x10),*(undefined4 *)(lVar3 + 0x18),0,
                           *(int *)(lVar4 + 0x18),
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  PTR_DAT_04cad860 + 0x20) + 0xc0) + 0xd0) + 0x20) +
                                      0xc0) + 0x150));
        return iVar2 != -1;
      }
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

