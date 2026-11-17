/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$TimeString
System_String_o* Dino_BusSand_App_UI_MainHudPanel__TimeString (int64_t seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$TimeString
   System_String_o* Dino_BusSand_App_UI_MainHudPanel__TimeString (int64_t seconds, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_MainHudPanel__TimeString_22fcdf0(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uStack_30;
  ulong uStack_28;
  
  if ((bRam0000000004f9c4af & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab3a8);
    FUN_02132f7c(PTR_DAT_04cb3240);
    FUN_02132f7c(PTR_DAT_04cb7ae8);
    FUN_02132f7c(PTR_DAT_04cab388);
    FUN_02132f7c(PTR_DAT_04caef28);
    bRam0000000004f9c4af = 1;
  }
  puVar4 = PTR_DAT_04cb3240;
  puVar3 = PTR_DAT_04cab3a8;
  puVar2 = PTR_DAT_04cab3a0;
  uStack_28 = 0;
  if ((long)param_1 < 0x15180) {
    param_1 = param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU);
    uVar1 = (int)param_1 + (int)((param_1 & 0xffffffff) / 0xe10) * -0xe10;
    uStack_30 = (ulong)(uint)((int)param_1 + (int)((param_1 & 0xffffffff) / 0x3c) * -0x3c);
    uStack_28 = ((ulong)uVar1 & 0xffff) / 0x3c;
    if (param_1 < 0xe10) {
      if ((uVar1 & 0xffff) < 0x3c) {
        uVar5 = System_Int64__ToString_482ec3c(&uStack_30,*(undefined8 *)PTR_DAT_04cb3240,0);
        System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb7ae8,uVar5,0);
      }
      else {
        uVar5 = System_Int64__ToString_482ec3c(&uStack_28,*(undefined8 *)PTR_DAT_04cb3240,0);
        uVar6 = System_Int64__ToString_482ec3c(&uStack_30,*(undefined8 *)puVar4,0);
        System_String__Concat_46d2b84(uVar5,*(undefined8 *)PTR_DAT_04cab388,uVar6,0);
      }
    }
    else {
      uVar5 = System_Int64__ToString_482e7e4(&stack0xffffffffffffffe8,0);
      uVar6 = System_Int64__ToString_482e7e4(&uStack_28,0);
      System_String__Concat_46d30e8
                (uVar5,*(undefined8 *)PTR_DAT_04cab3a8,uVar6,*(undefined8 *)PTR_DAT_04caef28,0);
    }
    return;
  }
  if ((bRam0000000004f9b7b8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab3a8,0);
    FUN_02132f7c(PTR_DAT_04cab3a0);
    bRam0000000004f9b7b8 = 1;
  }
  uStack_28 = (long)param_1 / 0x15180;
  uVar5 = System_Int64__ToString_482e7e4(&uStack_28,0);
  uStack_28 = ((long)param_1 / 0xe10) % 0x18;
  uVar6 = System_Int64__ToString_482e7e4(&uStack_28,0);
  System_String__Concat_46d30e8(uVar5,*(undefined8 *)puVar2,uVar6,*(undefined8 *)puVar3,0);
  return;
}

