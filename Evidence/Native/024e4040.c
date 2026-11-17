/* IL2CPP: Dino.BusSand.View.RoadLoopConfig$$get_Active
Dino_BusSand_View_RoadLoopConfig_o* Dino_BusSand_View_RoadLoopConfig__get_Active (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.RoadLoopConfig$$get_Active
   Dino_BusSand_View_RoadLoopConfig_o* Dino_BusSand_View_RoadLoopConfig__get_Active (const
   MethodInfo* method); */

undefined8 Dino_BusSand_View_RoadLoopConfig__get_Active_23e4040(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04cbda00;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca77 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbda08);
    FUN_02132f7c(PTR_DAT_04cbda00);
    FUN_02132f7c(PTR_DAT_04cbda10);
    FUN_02132f7c(PTR_DAT_04cbda18);
    bRam0000000004f9ca77 = 1;
  }
  uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    uVar6 = UnityEngine_Resources__Load_object__2891e2c
                      (*(undefined8 *)PTR_DAT_04cbda18,*(undefined8 *)PTR_DAT_04cbda08);
    puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *puVar5 = uVar6;
    thunk_FUN_02134474(puVar5,uVar6);
  }
  uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar3 & 1) == 0) {
    uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      uVar6 = UnityEngine_ScriptableObject__CreateInstance_object__28ad0cc
                        (*(undefined8 *)PTR_DAT_04cbda10);
      puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *puVar5 = uVar6;
      thunk_FUN_02134474(puVar5,uVar6);
      lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_Object__set_hideFlags_43c8654(lVar4,0x3d,0);
    }
    puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  }
  return *puVar5;
}

