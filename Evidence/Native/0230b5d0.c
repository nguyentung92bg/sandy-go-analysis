/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings.<Rows>d__29$$System.IDisposable.Dispose
void Dino_BusSand_App_Meta_EconomySettings__Rows_d__29__System_IDisposable_Dispose (Dino_BusSand_App_Meta_EconomySettings__Rows_d__29_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings.<Rows>d__29$$System.IDisposable.Dispose
   void Dino_BusSand_App_Meta_EconomySettings__Rows_d__29__System_IDisposable_Dispose
   (Dino_BusSand_App_Meta_EconomySettings__Rows_d__29_o* __this, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_App_Meta_EconomySettings__Rows_d__29__System_IDisposable_Dispose_220b5d0
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_04caa2f8;
  if ((*(int *)(param_1 + 0x10) != 1) && (*(int *)(param_1 + 0x10) != -3)) {
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  if ((bRam0000000004f9bcec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa2f8);
    bRam0000000004f9bcec = 1;
  }
  auVar3._8_8_ = *(undefined8 *)puVar1;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  auVar3._0_8_ = param_1 + 0x28;
  return auVar3;
}

