/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$NewDataValid
bool Dino_BusSand_App_Meta_ClimbTowerFeature__NewDataValid (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int64_t start, int64_t end, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$NewDataValid
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__NewDataValid
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int64_t start, int64_t end, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_Meta_ClimbTowerFeature__NewDataValid_222a8e8
          (undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_04caf910;
  if ((bRam0000000004f9be2c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2e20);
    FUN_02132f7c(PTR_DAT_04cb2e28);
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be2c = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  puVar2 = PTR_DAT_04cb2e28;
  if (lVar3 != 0) {
    iVar5 = 0;
    while (*(long *)(lVar3 + 0x58) != 0) {
      if (*(int *)(*(long *)(lVar3 + 0x58) + 0x18) <= iVar5) {
        return 1;
      }
      lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar1);
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x60) == 0)) break;
      if (*(int *)(*(long *)(lVar3 + 0x60) + 0x18) <= iVar5) {
        return 1;
      }
      lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar1);
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x58) == 0)) break;
      lVar3 = System_Collections_Generic_List_long___get_Item_3a30dcc
                        (*(long *)(lVar3 + 0x58),iVar5,*(undefined8 *)puVar2);
      lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar1);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x60) == 0)) break;
      lVar4 = System_Collections_Generic_List_long___get_Item_3a30dcc
                        (*(long *)(lVar4 + 0x60),iVar5,*(undefined8 *)puVar2);
      if (((lVar3 <= param_2) && (param_2 <= lVar4)) || ((lVar3 <= param_3 && (param_3 <= lVar4))))
      {
        return 0;
      }
      iVar5 = iVar5 + 1;
      lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar1);
      if (lVar3 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

