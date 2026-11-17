/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_DailyGiftDays
int32_t Dino_BusSand_App_Meta_Monetization__get_DailyGiftDays (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_DailyGiftDays
   int32_t Dino_BusSand_App_Meta_Monetization__get_DailyGiftDays (const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_Monetization__get_DailyGiftDays_2267f84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9c08c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb1e50);
    FUN_02132f7c(PTR_DAT_04cb1e78);
    bRam0000000004f9c08c = 1;
  }
  puVar3 = PTR_DAT_04cb1e78;
  puVar2 = PTR_DAT_04cb1e50;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Meta_EconomySettings__Row_22054c8(*(undefined8 *)puVar3,0);
  uVar5 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar5,*(undefined8 *)puVar2,0);
  lVar6 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar5,0);
  uVar4 = 0;
  if (lVar6 != 0) {
    uVar4 = *(undefined4 *)(lVar6 + 0x18);
  }
  return uVar4;
}

