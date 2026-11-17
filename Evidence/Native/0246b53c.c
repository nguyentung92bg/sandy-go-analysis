/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$Toggle
void Dino_BusSand_Cheat_CheatMobilePanel__Toggle (Dino_BusSand_Cheat_CheatMobilePanel_o* __this, System_String_o* label, System_Func_bool__o* on, System_Action_o* flip, bool close, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$Toggle
   void Dino_BusSand_Cheat_CheatMobilePanel__Toggle (Dino_BusSand_Cheat_CheatMobilePanel_o* __this,
   System_String_o* label, System_Func_bool__o* on, System_Action_o* flip, bool close, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatMobilePanel__Toggle_236b53c
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_04cbad98;
  if ((bRam0000000004f9c79a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb41b8);
    FUN_02132f7c(PTR_DAT_04cbada0);
    FUN_02132f7c(PTR_DAT_04cbada8);
    FUN_02132f7c(PTR_DAT_04cbad98);
    FUN_02132f7c(PTR_DAT_04cbadb0);
    bRam0000000004f9c79a = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass26_0___ctor_236dfa4(lVar5,0);
  puVar4 = PTR_DAT_04cbadb0;
  puVar3 = PTR_DAT_04cbada8;
  puVar2 = PTR_DAT_04cb41b8;
  if (lVar5 != 0) {
    puVar10 = (undefined8 *)(lVar5 + 0x10);
    *puVar10 = param_2;
    thunk_FUN_02134474(puVar10,param_2);
    *(undefined8 *)(lVar5 + 0x18) = param_3;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x18),param_3);
    Dino_BusSand_Cheat_CheatMobilePanel__Add_236b298(param_1,*puVar10,3,param_4,param_5 & 1);
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    lVar8 = *(long *)(param_1 + 0x48);
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Func_object____ctor_379de3c(uVar6,lVar5,*(undefined8 *)puVar3,0);
    uStack_70 = 0;
    uStack_68 = 0;
    System_ValueTuple_object__object____ctor_30ee190(&uStack_70,uVar9,uVar6,*(undefined8 *)puVar4);
    if (lVar8 != 0) {
      lVar5 = *(long *)(lVar8 + 0x10);
      lVar7 = *(long *)PTR_DAT_04cbada0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          puVar10 = (undefined8 *)(lVar5 + 0x20);
          *puVar10 = uStack_70;
          *(undefined8 *)(lVar5 + 0x28) = uStack_68;
          thunk_FUN_02134474(puVar10,0);
        }
        else {
          System_Collections_Generic_List_ValueTuple_object__object____AddWithResize_39bc1a4
                    (lVar8,uStack_70,uStack_68,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

