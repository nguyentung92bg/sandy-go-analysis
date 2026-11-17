/* IL2CPP: Dino.BusSand.App.Meta.RewardList$$Grant
void Dino_BusSand_App_Meta_RewardList__Grant (System_Collections_Generic_List_KeyValuePair_int__long___o* list, System_String_o* reason, int32_t times, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RewardList$$Grant
   void Dino_BusSand_App_Meta_RewardList__Grant
   (System_Collections_Generic_List_KeyValuePair_int__long___o* list, System_String_o* reason,
   int32_t times, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RewardList__Grant_220d370(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f9bd15 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caece0);
    FUN_02132f7c(PTR_DAT_04caece8);
    FUN_02132f7c(PTR_DAT_04caecf0);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caed00);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd15 = 1;
  }
  puVar3 = PTR_DAT_04caece8;
  puVar2 = PTR_DAT_04caece0;
  puVar1 = PTR_DAT_04cabaf8;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  if (param_1 != 0) {
    System_Collections_Generic_List_KeyValuePair_int__long____GetEnumerator_3966258
              (&uStack_60,param_1,*(undefined8 *)PTR_DAT_04caed00);
    while (uVar6 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____MoveNext_35b53dc
                             (&uStack_60,*(undefined8 *)puVar3), lVar5 = lStack_48,
          uVar4 = uStack_50, (uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__Add_2272578(uVar4 & 0xffffffff,lVar5 * param_3,param_2,0);
    }
    System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____Dispose_35b53d8
              (&uStack_60,*(undefined8 *)puVar2);
  }
  return;
}

