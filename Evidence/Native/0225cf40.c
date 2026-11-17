/* IL2CPP: Dino.BusSand.App.QaPilot.Runner.<Clickables>d__31$$MoveNext
bool Dino_BusSand_App_QaPilot_Runner__Clickables_d__31__MoveNext (Dino_BusSand_App_QaPilot_Runner__Clickables_d__31_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot.Runner.<Clickables>d__31$$MoveNext
   bool Dino_BusSand_App_QaPilot_Runner__Clickables_d__31__MoveNext
   (Dino_BusSand_App_QaPilot_Runner__Clickables_d__31_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_QaPilot_Runner__Clickables_d__31__MoveNext_215cf40(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  
  if ((bRam0000000004f9b801 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabe60);
    FUN_02132f7c(PTR_DAT_04cabe68);
    FUN_02132f7c(PTR_DAT_04cabe70);
    FUN_02132f7c(PTR_DAT_04cabe78);
    FUN_02132f7c(PTR_DAT_04cabe80);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabe88);
    bRam0000000004f9b801 = 1;
  }
  puVar6 = PTR_DAT_04cabe88;
  puVar5 = PTR_DAT_04cabe80;
  puVar4 = PTR_DAT_04cabe70;
  puVar3 = PTR_DAT_04cabe68;
  puVar2 = PTR_DAT_04ca9ae8;
  if (*(int *)(param_1 + 0x10) == 1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225d05c with catch @ 0225d06c
                        */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_0225d148;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_HashSet_object____ctor_37e5358(uVar7,*(undefined8 *)PTR_DAT_04cabe78);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),uVar7);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar7 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                      (*(long *)(param_1 + 0x28),0,*(undefined8 *)PTR_DAT_04cabe60);
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x40),uVar7);
                    /* try { // try from 0225d05c to 0235d05f has its CatchHandler @ 0225d06c */
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    while( true ) {
      plVar9 = (long *)(param_1 + 0x40);
      lVar12 = *plVar9;
      if (lVar12 == 0) break;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar10) {
        *plVar9 = 0;
        thunk_FUN_02134474(plVar9,0);
        return 0;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar11 = *(long **)(lVar12 + (long)(int)uVar10 * 8 + 0x20);
      plVar9 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        plVar9 = (long *)0x0;
        if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
           (plVar9 = plVar11,
           *(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
          plVar9 = (long *)0x0;
        }
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Equality_43c6f30(plVar9,0,0);
      if ((uVar8 & 1) == 0) {
        if (plVar9 == (long *)0x0) break;
        lVar12 = *(long *)(param_1 + 0x38);
        uVar7 = UnityEngine_Component__get_transform_43bcd18(plVar9,0);
        if (lVar12 == 0) break;
        uVar8 = System_Collections_Generic_HashSet_object___Add_37e654c
                          (lVar12,uVar7,*(undefined8 *)puVar4);
        if ((uVar8 & 1) != 0) {
          lVar12 = *plVar9;
          bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
          if (((*(byte *)(lVar12 + 0x130) < bVar1) ||
              (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) ||
             (uVar8 = (**(code **)(lVar12 + 0x2b8))(plVar9,*(undefined8 *)(lVar12 + 0x2c0)),
             (uVar8 & 1) != 0)) {
            uVar7 = UnityEngine_Component__get_transform_43bcd18(plVar9,0);
            *(undefined8 *)(param_1 + 0x18) = uVar7;
            thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
            *(undefined4 *)(param_1 + 0x10) = 1;
            return 1;
          }
        }
      }
LAB_0225d148:
      uVar10 = *(int *)(param_1 + 0x48) + 1;
      *(uint *)(param_1 + 0x48) = uVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

