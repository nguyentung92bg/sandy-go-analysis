/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Add
void Dino_BusSand_Cheat_AutoQa__Add (Dino_BusSand_Cheat_AutoQa_o* __this, bool ok, System_String_o* name, System_String_o* detail, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Add
   void Dino_BusSand_Cheat_AutoQa__Add (Dino_BusSand_Cheat_AutoQa_o* __this, bool ok,
   System_String_o* name, System_String_o* detail, const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoQa__Add_23430d8
               (long param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar4 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6a7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cb96d0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cb96d8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb96e0);
    FUN_02132f7c(PTR_DAT_04cb96e8);
    FUN_02132f7c(PTR_DAT_04cb96f0);
    FUN_02132f7c(PTR_DAT_04cb2308);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c6a7 = 1;
  }
  puVar3 = PTR_DAT_04cb96d0;
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar4;
  }
  lVar11 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(param_1 + 0x20);
    thunk_FUN_02134474();
    *(undefined8 *)(lVar5 + 0x18) = param_3;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x18),param_3);
    *(undefined8 *)(lVar5 + 0x20) = param_4;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x20),param_4);
    *(byte *)(lVar5 + 0x28) = param_2 & 1;
    if (lVar11 != 0) {
      lVar9 = *(long *)(lVar11 + 0x10);
      lVar10 = *(long *)PTR_DAT_04cb96d8;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      puVar3 = PTR_DAT_04caa038;
      if (lVar9 != 0) {
        uVar2 = *(uint *)(lVar11 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar2 + 1;
          plVar6 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
          *plVar6 = lVar5;
          thunk_FUN_02134474(plVar6,lVar5);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar11,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                    );
        }
        lVar5 = FUN_02133068(*(undefined8 *)puVar3,6);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_04cb96e0;
            thunk_FUN_02134474((undefined8 *)(lVar5 + 0x20));
            if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
              puVar1 = (undefined8 *)PTR_DAT_04cb96e8;
              if ((param_2 & 1) == 0) {
                puVar1 = (undefined8 *)PTR_DAT_04cb96f0;
              }
              *(undefined8 *)(lVar5 + 0x28) = *puVar1;
              thunk_FUN_02134474((undefined8 *)(lVar5 + 0x28));
              if (2 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(param_1 + 0x20);
                thunk_FUN_02134474((undefined8 *)(lVar5 + 0x30));
                puVar3 = PTR_DAT_04cb2308;
                if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)PTR_DAT_04cb2308;
                  thunk_FUN_02134474((undefined8 *)(lVar5 + 0x38));
                  if (4 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x40) = param_3;
                    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x40),param_3);
                    uVar7 = System_String__IsNullOrEmpty_46d2084(param_4,0);
                    if ((uVar7 & 1) == 0) {
                      uVar8 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,param_4,0);
                    }
                    else {
                      uVar8 = *(undefined8 *)PTR_DAT_04ca9c30;
                    }
                    puVar3 = PTR_DAT_04ca9af8;
                    if (5 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x48) = uVar8;
                      thunk_FUN_02134474();
                      uVar8 = System_String__Concat_46d31f0(lVar5,0);
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)puVar3);
                      }
                      UnityEngine_Debug__Log_4360fc8(uVar8,0);
                      lVar5 = *(long *)puVar4;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar5 = *(long *)puVar4;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
                      if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02443410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (**(code **)(lVar5 + 0x18))
                                  (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
                        return;
                      }
                      return;
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

