/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Edited
bool Dino_BusSand_App_UI_KitAdopt__Edited (UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Edited
   bool Dino_BusSand_App_UI_KitAdopt__Edited (UnityEngine_Transform_o* t, const MethodInfo* method);
    */

uint Dino_BusSand_App_UI_KitAdopt__Edited_227dd34(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uStack_2c;
  long lStack_28;
  
  puVar1 = PTR_DAT_04cad7b8;
  if ((bRam0000000004f9c130 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4bf8);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4b80);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c130 = 1;
  }
  lVar3 = *(long *)puVar1;
  lStack_28 = 0;
  uStack_2c = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) == 0) {
LAB_0237de5c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (0 < *(int *)(**(long **)(lVar3 + 0xb8) + 0x18)) {
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_App_UI_KitAdopt__Find_227d710(param_1,&lStack_28,&uStack_2c);
      if ((uVar4 & 1) != 0) {
        if (((lStack_28 == 0) || (*(long *)(lStack_28 + 0x20) == 0)) ||
           (lVar3 = *(long *)(*(long *)(lStack_28 + 0x20) + 0x40), lVar3 == 0)) goto LAB_0237de5c;
        uVar2 = System_Collections_Generic_Dictionary_int__ValueTuple_object__object____ContainsKey_3406960
                          (lVar3,uStack_2c,*(undefined8 *)PTR_DAT_04cb4bf8);
        goto LAB_0237de48;
      }
    }
  }
  uVar2 = 0;
LAB_0237de48:
  return uVar2 & 1;
}

