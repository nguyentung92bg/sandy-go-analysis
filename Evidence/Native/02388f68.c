/* IL2CPP: Dino.BusSand.App.UI.UiKit$$IsBreathing
bool Dino_BusSand_App_UI_UiKit__IsBreathing (UnityEngine_Transform_o* button, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$IsBreathing
   bool Dino_BusSand_App_UI_UiKit__IsBreathing (UnityEngine_Transform_o* button, const MethodInfo*
   method); */

uint Dino_BusSand_App_UI_UiKit__IsBreathing_2288f68(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000004f9c19c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb50d8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb50e0);
    bRam0000000004f9c19c = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    lVar3 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cb50e0,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar6);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (lVar3 != 0) {
      uVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                        (lVar3,*(undefined8 *)PTR_DAT_04cb50d8);
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar3);
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004fa8638 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
        bRam0000000004fa8638 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar5,0);
      return (uVar2 ^ 0xffffffff) & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

