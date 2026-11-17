/* IL2CPP: Dino.BusSand.App.Meta.LiveClock$$get_UtcNow
System_DateTime_o Dino_BusSand_App_Meta_LiveClock__get_UtcNow (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveClock$$get_UtcNow
   System_DateTime_o Dino_BusSand_App_Meta_LiveClock__get_UtcNow (const MethodInfo* method); */

void Dino_BusSand_App_Meta_LiveClock__get_UtcNow_2240648(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_DAT_04cacfd0;
  if ((bRam0000000004f9bef8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd0);
    bRam0000000004f9bef8 = 1;
  }
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  uVar2 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  auStack_30 = System_DateTimeOffset__FromUnixTimeMilliseconds_48153ac(uVar2,0);
  System_DateTimeOffset__get_UtcDateTime_4814760(auStack_30,0);
  return;
}

