/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$Config
Dino_BusSand_App_Meta_GiftPackConfig_o* Dino_BusSand_App_Meta_GiftPackFeature__Config (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$Config
   Dino_BusSand_App_Meta_GiftPackConfig_o* Dino_BusSand_App_Meta_GiftPackFeature__Config
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t id, const MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9be9a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3370);
    FUN_02132f7c(PTR_DAT_04cb3378);
    FUN_02132f7c(PTR_DAT_04cb3380);
    FUN_02132f7c(PTR_DAT_04cb3388);
    bRam0000000004f9be9a = 1;
  }
  puVar2 = PTR_DAT_04cb3378;
  puVar1 = PTR_DAT_04cb3370;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
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
      lVar4 = 0;
      break;
    }
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = lStack_38;
  } while (*(int *)(lStack_38 + 0x10) != param_2);
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_48,*(undefined8 *)puVar1);
  return lVar4;
}

