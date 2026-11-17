/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$Emit
void Dino_BusSand_App_UI_HomePuffs__Emit (Dino_BusSand_App_UI_HomePuffs_o* __this, UnityEngine_Vector3_o world, UnityEngine_Vector3_o vel, float life, float s0, float s1, float alpha, UnityEngine_Color_o c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$Emit
   void Dino_BusSand_App_UI_HomePuffs__Emit (Dino_BusSand_App_UI_HomePuffs_o* __this,
   UnityEngine_Vector3_o world, UnityEngine_Vector3_o vel, float life, float s0, float s1, float
   alpha, UnityEngine_Color_o c, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomePuffs__Emit_22e5d7c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_68;
  
  if ((bRam0000000004f9c425 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb72e0);
    FUN_02132f7c(PTR_DAT_04cb72e8);
    FUN_02132f7c(PTR_DAT_04cb72f0);
    bRam0000000004f9c425 = 1;
  }
  lVar4 = *(long *)(param_9 + 0x10);
  if ((lVar4 != 0) && (*(long *)(param_9 + 0x68) != 0)) {
    if (*(int *)(lVar4 + 0x18) < *(int *)(*(long *)(param_9 + 0x68) + 0x18)) {
      uStack_74 = UnityEngine_Random__Range_43b64a8(0xbf800000,0x3f800000,0);
    }
    else {
      System_Collections_Generic_List_HomePuffs_P___RemoveAt_3b447f4
                (lVar4,0,*(undefined8 *)PTR_DAT_04cb72e8);
      lVar4 = *(long *)(param_9 + 0x10);
      uStack_74 = UnityEngine_Random__Range_43b64a8(0xbf800000,0x3f800000,0);
      if (lVar4 == 0) goto LAB_023e5f28;
    }
    lVar2 = *(long *)(lVar4 + 0x10);
    lVar3 = *(long *)PTR_DAT_04cb72e0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + (long)(int)uVar1 * 0x40;
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar2 + 0x20) = param_1;
        *(undefined4 *)(lVar2 + 0x24) = param_2;
        *(undefined4 *)(lVar2 + 0x28) = param_3;
        *(undefined4 *)(lVar2 + 0x2c) = param_4;
        *(undefined4 *)(lVar2 + 0x30) = param_5;
        *(undefined4 *)(lVar2 + 0x34) = param_6;
        *(undefined4 *)(lVar2 + 0x38) = 0;
        *(undefined4 *)(lVar2 + 0x3c) = param_7;
        *(undefined4 *)(lVar2 + 0x40) = param_8;
        *(undefined4 *)(lVar2 + 0x44) = in_stack_00000000;
        *(undefined4 *)(lVar2 + 0x48) = in_stack_00000008;
        *(undefined4 *)(lVar2 + 0x4c) = uStack_74;
        *(undefined4 *)(lVar2 + 0x50) = uStack0000000000000010;
        *(undefined4 *)(lVar2 + 0x54) = uStack0000000000000014;
        *(undefined4 *)(lVar2 + 0x58) = uStack0000000000000018;
        *(undefined4 *)(lVar2 + 0x5c) = uStack000000000000001c;
      }
      else {
        uStack_88 = 0;
        uStack_7c = in_stack_00000000;
        uStack_78 = in_stack_00000008;
        uStack_70 = uStack0000000000000010;
        uStack_68 = uStack0000000000000018;
        uStack_a0 = param_1;
        uStack_9c = param_2;
        uStack_98 = param_3;
        uStack_94 = param_4;
        uStack_90 = param_5;
        uStack_8c = param_6;
        uStack_84 = param_7;
        uStack_80 = param_8;
        System_Collections_Generic_List_HomePuffs_P___AddWithResize_3b42d64
                  (lVar4,&uStack_a0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
LAB_023e5f28:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

