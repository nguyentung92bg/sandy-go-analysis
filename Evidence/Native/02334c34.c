/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$FindFirstConfig
Dino_BusSand_App_Meta_GiftPackConfig_o* Dino_BusSand_App_Meta_GiftPackFeature__FindFirstConfig (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$FindFirstConfig
   Dino_BusSand_App_Meta_GiftPackConfig_o* Dino_BusSand_App_Meta_GiftPackFeature__FindFirstConfig
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t type, const MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackFeature__FindFirstConfig_2234c34(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9be9b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3370);
    FUN_02132f7c(PTR_DAT_04cb3378);
    FUN_02132f7c(PTR_DAT_04cb3380);
    FUN_02132f7c(PTR_DAT_04cb3388);
    bRam0000000004f9be9b = 1;
  }
  puVar2 = PTR_DAT_04cb3378;
  puVar1 = PTR_DAT_04cb3370;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_04cb3388);
    lVar3 = 0;
    while( true ) {
      lVar5 = lVar3;
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_48,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_48,*(undefined8 *)puVar1);
        return lVar5;
      }
      if (lStack_38 == 0) break;
      lVar3 = lVar5;
      if (((*(int *)(lStack_38 + 0x54) == param_2) && (lVar3 = lStack_38, lVar5 != 0)) &&
         (lVar3 = lVar5, *(int *)(lStack_38 + 0x3c) < *(int *)(lVar5 + 0x3c))) {
        lVar3 = lStack_38;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

