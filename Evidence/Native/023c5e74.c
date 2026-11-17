/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$ClearTargets
void Dino_BusSand_App_UI_GuideDimHoles__ClearTargets (Dino_BusSand_App_UI_GuideDimHoles_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$ClearTargets
   void Dino_BusSand_App_UI_GuideDimHoles__ClearTargets (Dino_BusSand_App_UI_GuideDimHoles_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_GuideDimHoles__ClearTargets_22c5e74(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  undefined *puVar7;
  
  if ((bRam0000000004f9c358 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb68d0);
    FUN_02132f7c(PTR_DAT_04cb68d8);
    FUN_02132f7c(PTR_DAT_04cb68e0);
    bRam0000000004f9c358 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
    }
    lVar8 = *(long *)(param_1 + 0x68);
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      }
      lVar8 = *(long *)(param_1 + 0x70);
      if (lVar8 != 0) {
        iVar1 = *(int *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (iVar1 < 1) {
          return;
        }
        puVar4 = *(undefined8 **)(lVar8 + 0x10);
        if (puVar4 == (undefined8 *)0x0) {
          thunk_FUN_021985a8(PTR_DAT_04cbe5c8,0,iVar1,0);
          uVar5 = thunk_FUN_0216e89c();
          uVar6 = thunk_FUN_021985a8(PTR_DAT_04cc29c8);
          System_ArgumentNullException___ctor_47afb54(uVar5,uVar6,0);
        }
        else {
          if (iVar1 < 0) {
            thunk_FUN_021985a8(PTR_DAT_04cc27d8,0,iVar1,0);
            uVar5 = thunk_FUN_0216e89c();
            puVar7 = PTR_DAT_04d13dc0;
          }
          else {
            iVar2 = FUN_02143bfc(puVar4,0);
            if (iVar2 < 1) {
              iVar3 = System_Array__get_Length_4848454(puVar4);
              if (-iVar2 <= iVar3 - iVar1) {
                iVar3 = il2cpp_array_element_size(*puVar4);
                (*(code *)PTR_memset_04d166b8)
                          ((long)puVar4 + (long)iVar3 * (long)-iVar2 + 0x20,0,(long)(iVar3 * iVar1))
                ;
                return;
              }
              thunk_FUN_021985a8(PTR_DAT_04cc27d8);
              uVar5 = thunk_FUN_0216e89c();
              puVar7 = PTR_DAT_04d13dd0;
            }
            else {
              thunk_FUN_021985a8(PTR_DAT_04cc27d8);
              uVar5 = thunk_FUN_0216e89c();
              puVar7 = PTR_DAT_04d13dc8;
            }
          }
          uVar6 = thunk_FUN_021985a8(puVar7);
          System_IndexOutOfRangeException___ctor_482b694(uVar5,uVar6,0);
        }
        uVar6 = thunk_FUN_021985a8(PTR_DAT_04d13dd8);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar5,uVar6);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

