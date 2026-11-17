/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$Quad
void Dino_BusSand_View_PropKit_MeshBuilder__Quad (Dino_BusSand_View_PropKit_MeshBuilder_o* __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, UnityEngine_Vector3_o c, UnityEngine_Vector3_o d, UnityEngine_Vector3_o n, UnityEngine_Color_o col, float emit, float spec, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$Quad
   void Dino_BusSand_View_PropKit_MeshBuilder__Quad (Dino_BusSand_View_PropKit_MeshBuilder_o*
   __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, UnityEngine_Vector3_o c,
   UnityEngine_Vector3_o d, UnityEngine_Vector3_o n, UnityEngine_Color_o col, float emit, float
   spec, const MethodInfo* method); */

void Dino_BusSand_View_PropKit_MeshBuilder__Quad_23dea04
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  
  if ((bRam0000000004f9ca5e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa160);
    bRam0000000004f9ca5e = 1;
  }
  iVar4 = Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                    (param_1,param_2,param_3,uStack0000000000000020,uStack0000000000000024,
                     in_stack_00000028,param_7);
  Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
            (param_4,param_5,param_6,uStack0000000000000020,uStack0000000000000024,in_stack_00000028
             ,param_7);
  Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
            (uStack0000000000000000,uStack0000000000000004,in_stack_00000008,uStack0000000000000020,
             uStack0000000000000024,in_stack_00000028,param_7);
  Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
            (uStack0000000000000010,uStack0000000000000014,in_stack_00000018,uStack0000000000000020,
             uStack0000000000000024,in_stack_00000028,param_7);
  puVar3 = PTR_DAT_04caa160;
  lVar5 = *(long *)(param_7 + 0x30);
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar7 = *(long *)PTR_DAT_04caa160;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        *(int *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = iVar4;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                  (lVar5,iVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(param_7 + 0x30);
        if (lVar5 == 0) goto LAB_024dede0;
      }
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar7 = *(long *)puVar3;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          *(int *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = iVar4 + 1;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar5,iVar4 + 1,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          lVar5 = *(long *)(param_7 + 0x30);
          if (lVar5 == 0) goto LAB_024dede0;
        }
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *(long *)puVar3;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar2 = *(uint *)(lVar5 + 0x18);
          iVar1 = iVar4 + 2;
          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            *(int *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = iVar1;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar5,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
            lVar5 = *(long *)(param_7 + 0x30);
            if (lVar5 == 0) goto LAB_024dede0;
          }
          lVar6 = *(long *)(lVar5 + 0x10);
          lVar7 = *(long *)puVar3;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar2 = *(uint *)(lVar5 + 0x18);
            if (uVar2 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar2 + 1;
              *(int *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = iVar4;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar5,iVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              lVar5 = *(long *)(param_7 + 0x30);
              if (lVar5 == 0) goto LAB_024dede0;
            }
            lVar6 = *(long *)(lVar5 + 0x10);
            lVar7 = *(long *)puVar3;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar2 = *(uint *)(lVar5 + 0x18);
              if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                *(int *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = iVar1;
              }
              else {
                System_Collections_Generic_List_int___AddWithResize_3a2c06c
                          (lVar5,iVar1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(param_7 + 0x30);
                if (lVar5 == 0) goto LAB_024dede0;
              }
              lVar6 = *(long *)(lVar5 + 0x10);
              lVar7 = *(long *)puVar3;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar2 = *(uint *)(lVar5 + 0x18);
                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                  *(int *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = iVar4 + 3;
                  return;
                }
                uVar2 = *(uint *)(lVar5 + 0x18);
                System_Collections_Generic_List_int___EnsureCapacity_3a2c62c
                          (lVar5,uVar2 + 1,
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0)
                                                          + 0x70) + 0x20) + 0xc0) + 0x78));
                lVar6 = *(long *)(lVar5 + 0x10);
                *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                if (lVar6 != 0) {
                  if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                    *(int *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = iVar4 + 3;
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
            }
          }
        }
      }
    }
  }
LAB_024dede0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

