/* IL2CPP: Dino.BusSand.App.UI.HallScene$$UnloadEnvironment
void Dino_BusSand_App_UI_HallScene__UnloadEnvironment (Dino_BusSand_App_UI_HallScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HallScene$$UnloadEnvironment
   void Dino_BusSand_App_UI_HallScene__UnloadEnvironment (Dino_BusSand_App_UI_HallScene_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HallScene__UnloadEnvironment_22d2e48(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar9;
  long lVar10;
  undefined *puVar8;
  
  puVar8 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3ba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6c90);
    FUN_02132f7c(PTR_DAT_04cb6d00);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3ba = 1;
  }
  plVar9 = (long *)(param_1 + 0x30);
  lVar10 = *plVar9;
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*plVar9 != 0) {
    UnityEngine_GameObject__SetActive_43c1408(*plVar9,0,0);
    lVar10 = *plVar9;
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(lVar10,0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    thunk_FUN_02134474(plVar9,0);
    *(undefined8 *)(param_1 + 0x40) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x40),0);
    *(undefined8 *)(param_1 + 0x38) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),0);
    *(undefined8 *)(param_1 + 0x48) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x48),0);
    lVar10 = *(long *)(param_1 + 0x50);
    if (lVar10 != 0) {
      iVar1 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
      }
      lVar10 = *(long *)(param_1 + 0x58);
      if (lVar10 != 0) {
        iVar1 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear_4851dc8(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
        }
        lVar10 = *(long *)(param_1 + 0x60);
        if (lVar10 != 0) {
          iVar1 = *(int *)(lVar10 + 0x18);
          *(undefined4 *)(lVar10 + 0x18) = 0;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (iVar1 < 1) {
            return;
          }
          puVar5 = *(undefined8 **)(lVar10 + 0x10);
          if (puVar5 == (undefined8 *)0x0) {
            thunk_FUN_021985a8(PTR_DAT_04cbe5c8,0,iVar1,0);
            uVar6 = thunk_FUN_0216e89c();
            uVar7 = thunk_FUN_021985a8(PTR_DAT_04cc29c8);
            System_ArgumentNullException___ctor_47afb54(uVar6,uVar7,0);
          }
          else {
            if (iVar1 < 0) {
              thunk_FUN_021985a8(PTR_DAT_04cc27d8,0,iVar1,0);
              uVar6 = thunk_FUN_0216e89c();
              puVar8 = PTR_DAT_04d13dc0;
            }
            else {
              iVar2 = FUN_02143bfc(puVar5,0);
              if (iVar2 < 1) {
                iVar3 = System_Array__get_Length_4848454(puVar5);
                if (-iVar2 <= iVar3 - iVar1) {
                  iVar3 = il2cpp_array_element_size(*puVar5);
                  (*(code *)PTR_memset_04d166b8)
                            ((long)puVar5 + (long)iVar3 * (long)-iVar2 + 0x20,0,
                             (long)(iVar3 * iVar1));
                  return;
                }
                thunk_FUN_021985a8(PTR_DAT_04cc27d8);
                uVar6 = thunk_FUN_0216e89c();
                puVar8 = PTR_DAT_04d13dd0;
              }
              else {
                thunk_FUN_021985a8(PTR_DAT_04cc27d8);
                uVar6 = thunk_FUN_0216e89c();
                puVar8 = PTR_DAT_04d13dc8;
              }
            }
            uVar7 = thunk_FUN_021985a8(puVar8);
            System_IndexOutOfRangeException___ctor_482b694(uVar6,uVar7,0);
          }
          uVar7 = thunk_FUN_021985a8(PTR_DAT_04d13dd8);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar6,uVar7);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

