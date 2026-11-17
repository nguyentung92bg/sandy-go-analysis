/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$Vert
int32_t Dino_BusSand_View_PropKit_MeshBuilder__Vert (Dino_BusSand_View_PropKit_MeshBuilder_o* __this, UnityEngine_Vector3_o p, UnityEngine_Vector3_o n, UnityEngine_Color_o c, float emit, float spec, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$Vert
   int32_t Dino_BusSand_View_PropKit_MeshBuilder__Vert (Dino_BusSand_View_PropKit_MeshBuilder_o*
   __this, UnityEngine_Vector3_o p, UnityEngine_Vector3_o n, UnityEngine_Color_o c, float emit,
   float spec, const MethodInfo* method); */

int Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,long param_7)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  if ((bRam0000000004f9ca5d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc360);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04caa178);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    bRam0000000004f9ca5d = 1;
  }
  puVar2 = PTR_DAT_04caa170;
  lVar3 = *(long *)(param_7 + 0x10);
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar5 = *(long *)PTR_DAT_04caa170;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar4 + 0x20) = param_1;
        *(undefined4 *)(lVar4 + 0x24) = param_2;
        *(undefined4 *)(lVar4 + 0x28) = param_3;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (param_1,param_2,param_3,lVar3,
                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      lVar3 = *(long *)(param_7 + 0x18);
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar4 + 0x20) = param_4;
            *(undefined4 *)(lVar4 + 0x24) = param_5;
            *(undefined4 *)(lVar4 + 0x28) = param_6;
          }
          else {
            System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                      (param_4,param_5,param_6,lVar3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          lVar3 = *(long *)(param_7 + 0x20);
          if (lVar3 != 0) {
            lVar4 = *(long *)(lVar3 + 0x10);
            lVar5 = *(long *)PTR_DAT_04cbc360;
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar4 != 0) {
              uVar1 = *(uint *)(lVar3 + 0x18);
              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                lVar4 = lVar4 + (long)(int)uVar1 * 0x10;
                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar4 + 0x20) = uStack0000000000000000;
                *(undefined4 *)(lVar4 + 0x24) = uStack0000000000000004;
                *(undefined4 *)(lVar4 + 0x28) = uStack0000000000000008;
                *(undefined4 *)(lVar4 + 0x2c) = uStack000000000000000c;
              }
              else {
                System_Collections_Generic_List_Color___AddWithResize_3a023f0
                          (lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              lVar3 = *(long *)(param_7 + 0x28);
              if (lVar3 != 0) {
                lVar4 = *(long *)(lVar3 + 0x10);
                lVar5 = *(long *)PTR_DAT_04caa178;
                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                if (lVar4 != 0) {
                  uVar1 = *(uint *)(lVar3 + 0x18);
                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    lVar4 = lVar4 + (long)(int)uVar1 * 8;
                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar4 + 0x20) = in_stack_00000010;
                    *(undefined4 *)(lVar4 + 0x24) = in_stack_00000018;
                  }
                  else {
                    System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                              (lVar3,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                  if (*(long *)(param_7 + 0x10) != 0) {
                    return *(int *)(*(long *)(param_7 + 0x10) + 0x18) + -1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

