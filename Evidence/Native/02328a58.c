/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpend$$ReportItemUse
void Dino_BusSand_App_Meta_BattleYachtSpend__ReportItemUse (int32_t id, int64_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpend$$ReportItemUse
   void Dino_BusSand_App_Meta_BattleYachtSpend__ReportItemUse (int32_t id, int64_t n, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleYachtSpend__ReportItemUse_2228a58
               (undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb2c68;
  if ((bRam0000000004f9be0c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2c68);
    bRam0000000004f9be0c = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02328ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),param_1,param_2,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

