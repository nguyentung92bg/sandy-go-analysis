/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$PackIdByShopItem
int32_t Dino_BusSand_App_Meta_GiftPackFeature__PackIdByShopItem (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t shopItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$PackIdByShopItem
   int32_t Dino_BusSand_App_Meta_GiftPackFeature__PackIdByShopItem
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t shopItemId, const MethodInfo* method);
    */

undefined4 Dino_BusSand_App_Meta_GiftPackFeature__PackIdByShopItem_2234d90(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9be9c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3370);
    FUN_02132f7c(PTR_DAT_04cb3378);
    FUN_02132f7c(PTR_DAT_04cb3380);
    FUN_02132f7c(PTR_DAT_04cb3388);
    bRam0000000004f9be9c = 1;
  }
  puVar2 = PTR_DAT_04cb3378;
  puVar1 = PTR_DAT_04cb3370;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (param_2 < 1) {
    uVar4 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_04cb3388);
    do {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_48,*(undefined8 *)puVar2);
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        goto LAB_02334e68;
      }
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    } while (*(int *)(lStack_38 + 0x18) != param_2);
    uVar4 = *(undefined4 *)(lStack_38 + 0x10);
LAB_02334e68:
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_48,*(undefined8 *)puVar1);
  }
  return uVar4;
}

