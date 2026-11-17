/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$Glow
void Dino_BusSand_App_UI_HomePuffs__Glow (Dino_BusSand_App_UI_HomePuffs_o* __this, UnityEngine_Vector3_o world, float size, UnityEngine_Color_o c, float alpha, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$Glow
   void Dino_BusSand_App_UI_HomePuffs__Glow (Dino_BusSand_App_UI_HomePuffs_o* __this,
   UnityEngine_Vector3_o world, float size, UnityEngine_Color_o c, float alpha, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_HomePuffs__Glow_22e5f2c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 in_stack_00000000;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if ((bRam0000000004f9c426 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb72e0);
    FUN_02132f7c(PTR_DAT_04cb72f0);
    bRam0000000004f9c426 = 1;
  }
  lVar2 = *(long *)(param_9 + 0x18);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if ((int)uVar1 < 8) {
      lVar3 = *(long *)(lVar2 + 0x10);
      lVar4 = *(long *)PTR_DAT_04cb72e0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar3 == 0) goto LAB_023e6078;
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 0x40;
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar3 + 0x20) = param_1;
        *(undefined4 *)(lVar3 + 0x24) = param_2;
        *(undefined4 *)(lVar3 + 0x28) = param_3;
        *(undefined8 *)(lVar3 + 0x34) = 0;
        *(undefined8 *)(lVar3 + 0x2c) = 0;
        *(undefined4 *)(lVar3 + 0x3c) = 0x3f800000;
        *(undefined4 *)(lVar3 + 0x40) = param_4;
        *(undefined4 *)(lVar3 + 0x44) = param_4;
        *(undefined4 *)(lVar3 + 0x48) = in_stack_00000000;
        *(undefined4 *)(lVar3 + 0x4c) = 0;
        *(undefined4 *)(lVar3 + 0x50) = param_5;
        *(undefined4 *)(lVar3 + 0x54) = param_6;
        *(undefined4 *)(lVar3 + 0x58) = param_7;
        *(undefined4 *)(lVar3 + 0x5c) = param_8;
      }
      else {
        uStack_8c = 0;
        uStack_94 = 0;
        uStack_84 = 0x3f800000;
        uStack_78 = in_stack_00000000;
        uStack_74 = 0;
        uStack_a0 = param_1;
        uStack_9c = param_2;
        uStack_98 = param_3;
        uStack_80 = param_4;
        uStack_7c = param_4;
        uStack_70 = param_5;
        uStack_6c = param_6;
        uStack_68 = param_7;
        uStack_64 = param_8;
        System_Collections_Generic_List_HomePuffs_P___AddWithResize_3b42d64
                  (lVar2,&uStack_a0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
    }
    return;
  }
LAB_023e6078:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

