/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$ReachedStage
int32_t Dino_BusSand_App_Meta_GiftPackFeature__ReachedStage (System_Collections_Generic_List_GiftPackFeature_GoldenStage__o* stages, int32_t passLevelCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$ReachedStage
   int32_t Dino_BusSand_App_Meta_GiftPackFeature__ReachedStage
   (System_Collections_Generic_List_GiftPackFeature_GoldenStage__o* stages, int32_t passLevelCount,
   const MethodInfo* method); */

int Dino_BusSand_App_Meta_GiftPackFeature__ReachedStage_223bef0(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9bed7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caeea8);
    FUN_02132f7c(PTR_DAT_04caeeb0);
    FUN_02132f7c(PTR_DAT_04caeeb8);
    FUN_02132f7c(PTR_DAT_04caeec0);
    bRam0000000004f9bed7 = 1;
  }
  puVar2 = PTR_DAT_04caeeb0;
  puVar1 = PTR_DAT_04caeea8;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (param_1 != 0) {
    System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
              (&uStack_50,param_1,*(undefined8 *)PTR_DAT_04caeec0);
    iVar3 = 0;
    while (iVar5 = iVar3,
          uVar4 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                            (&uStack_50,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      iVar3 = (int)uStack_40;
      if ((int)uStack_40 <= iVar5 || param_2 < uStack_40._4_4_) {
        iVar3 = iVar5;
      }
    }
    System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
              (&uStack_50,*(undefined8 *)puVar1);
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

