/* IL2CPP: Dino.BusSand.App.Meta.DailyGift$$get_LastChest
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_DailyGift__get_LastChest (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyGift$$get_LastChest
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_DailyGift__get_LastChest (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_DailyGift__get_LastChest_220e114(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb21e8;
  if ((bRam0000000004f9bd22 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb21e8);
    bRam0000000004f9bd22 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}

