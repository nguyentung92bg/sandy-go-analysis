/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$CoinsOf
int64_t Dino_BusSand_App_UI_StorePanel__CoinsOf (int32_t itemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$CoinsOf
   int64_t Dino_BusSand_App_UI_StorePanel__CoinsOf (int32_t itemId, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_StorePanel__CoinsOf_22b930c(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cac7b8;
  if ((bRam0000000004f9c2f3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04caece0);
    FUN_02132f7c(PTR_DAT_04caece8);
    FUN_02132f7c(PTR_DAT_04caecf0);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caed00);
    bRam0000000004f9c2f3 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_UI_CommerceUi__StoreGet_22abc70(param_1);
  puVar2 = PTR_DAT_04caece8;
  puVar1 = PTR_DAT_04caece0;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_KeyValuePair_int__long____GetEnumerator_3966258
            (&uStack_40,lVar3,*(undefined8 *)PTR_DAT_04caed00);
  do {
    uVar4 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____MoveNext_35b53dc
                      (&uStack_40,*(undefined8 *)puVar2);
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
      break;
    }
    uVar5 = uStack_28;
  } while ((int)uStack_30 != 0x3e9);
  System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____Dispose_35b53d8
            (&uStack_40,*(undefined8 *)puVar1);
  return uVar5;
}

