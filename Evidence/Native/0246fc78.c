/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$Flush
void Dino_BusSand_Cheat_QaJourney__Flush (Dino_BusSand_Cheat_QaJourney_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$Flush
   void Dino_BusSand_Cheat_QaJourney__Flush (Dino_BusSand_Cheat_QaJourney_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_QaJourney__Flush_236fc78(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  if ((bRam0000000004f9c7cb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacd48);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cbaff0);
    FUN_02132f7c(PTR_DAT_04cb1e48);
    FUN_02132f7c(PTR_DAT_04cb4e08);
    FUN_02132f7c(PTR_DAT_04cbaff8);
    bRam0000000004f9c7cb = 1;
  }
  if (*(int *)(param_1 + 0x40) < 1) {
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 == 0) goto LAB_0246febc;
    if (*(int *)(lVar8 + 0x18) < 1) {
      iVar1 = *(int *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(int *)(param_1 + 0x3c) = iVar1 + *(int *)(param_1 + 0x3c);
      goto LAB_0246fe68;
    }
  }
  lVar9 = *(long *)(param_1 + 0x20);
  lVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,6);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) != 0) {
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_04cb4e08;
      thunk_FUN_02134474((undefined8 *)(lVar8 + 0x20));
      uVar4 = System_Int32__ToString_482d750((int *)(param_1 + 0x40),0);
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar8 + 0x28) = uVar4;
        thunk_FUN_02134474((undefined8 *)(lVar8 + 0x28),uVar4);
        if (2 < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_04cbaff0;
          thunk_FUN_02134474((undefined8 *)(lVar8 + 0x30));
          uVar4 = System_Int32__ToString_482d750(param_1 + 0x38,0);
          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar8 + 0x38) = uVar4;
            thunk_FUN_02134474((undefined8 *)(lVar8 + 0x38),uVar4);
            puVar7 = PTR_DAT_04cb1e48;
            if (4 < *(uint *)(lVar8 + 0x18)) {
              *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_04cbaff8;
              thunk_FUN_02134474((undefined8 *)(lVar8 + 0x40));
              uVar4 = System_String__Join_46d39a4
                                (*(undefined8 *)puVar7,*(undefined8 *)(param_1 + 0x28),0);
              if (5 < *(uint *)(lVar8 + 0x18)) {
                *(undefined8 *)(lVar8 + 0x48) = uVar4;
                thunk_FUN_02134474();
                uVar4 = System_String__Concat_46d31f0(lVar8,0);
                if (lVar9 != 0) {
                  System_Text_StringBuilder__AppendLine_46dd2c8(lVar9,uVar4,0);
                  iVar1 = *(int *)(param_1 + 0x38);
                  lVar8 = *(long *)(param_1 + 0x28);
                  *(undefined4 *)(param_1 + 0x38) = 0;
                  *(int *)(param_1 + 0x3c) = iVar1 + *(int *)(param_1 + 0x3c);
                  if (lVar8 != 0) {
LAB_0246fe68:
                    iVar1 = *(int *)(lVar8 + 0x18);
                    *(undefined4 *)(lVar8 + 0x18) = 0;
                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    if (iVar1 < 1) {
                      return;
                    }
                    puVar5 = *(undefined8 **)(lVar8 + 0x10);
                    if (puVar5 == (undefined8 *)0x0) {
                      thunk_FUN_021985a8(PTR_DAT_04cbe5c8,0,iVar1,0);
                      uVar6 = thunk_FUN_0216e89c();
                      uVar4 = thunk_FUN_021985a8(PTR_DAT_04cc29c8);
                      System_ArgumentNullException___ctor_47afb54(uVar6,uVar4,0);
                    }
                    else {
                      if (iVar1 < 0) {
                        thunk_FUN_021985a8(PTR_DAT_04cc27d8,0,iVar1,0);
                        uVar6 = thunk_FUN_0216e89c();
                        puVar7 = PTR_DAT_04d13dc0;
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
                          puVar7 = PTR_DAT_04d13dd0;
                        }
                        else {
                          thunk_FUN_021985a8(PTR_DAT_04cc27d8);
                          uVar6 = thunk_FUN_0216e89c();
                          puVar7 = PTR_DAT_04d13dc8;
                        }
                      }
                      uVar4 = thunk_FUN_021985a8(puVar7);
                      System_IndexOutOfRangeException___ctor_482b694(uVar6,uVar4,0);
                    }
                    uVar4 = thunk_FUN_021985a8(PTR_DAT_04d13dd8);
                    /* WARNING: Subroutine does not return */
                    FUN_021330e8(uVar6,uVar4);
                  }
                }
                goto LAB_0246febc;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_0246febc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

