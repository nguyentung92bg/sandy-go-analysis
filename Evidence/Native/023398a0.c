/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$SumSince
double Dino_BusSand_App_Meta_GiftPackFeature__SumSince (System_Collections_Generic_List_GiftTimedAmount__o* list, int32_t id, int64_t since, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$SumSince
   double Dino_BusSand_App_Meta_GiftPackFeature__SumSince
   (System_Collections_Generic_List_GiftTimedAmount__o* list, int32_t id, int64_t since, const
   MethodInfo* method); */

undefined1  [16]
Dino_BusSand_App_Meta_GiftPackFeature__SumSince_22398a0(long param_1,int param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((bRam0000000004f9beb9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3590);
    FUN_02132f7c(PTR_DAT_04cb3598);
    FUN_02132f7c(PTR_DAT_04cb35a0);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cb35a8);
    bRam0000000004f9beb9 = 1;
  }
  puVar3 = PTR_DAT_04cb35a8;
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  if (param_1 == 0) {
    dVar7 = 0.0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04cb3598;
    puVar1 = PTR_DAT_04cb3590;
    lVar4 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_68,param_1,*(undefined8 *)puVar3);
    dVar7 = 0.0;
    while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_68,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
      if ((((lStack_58 != 0) && (*(int *)(lStack_58 + 0x18) == param_2)) &&
          (param_3 <= *(long *)(lStack_58 + 0x10))) && (*(long *)(lStack_58 + 0x10) <= lVar4 / 1000)
         ) {
        dVar7 = dVar7 + *(double *)(lStack_58 + 0x20);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_68,*(undefined8 *)puVar1);
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar7;
  return auVar6;
}

