/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$ItemFailText
System_String_o* Dino_BusSand_App_UI_HudPanel__ItemFailText (Dino_BusSand_App_UI_HudPanel_o* __this, System_String_o* reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$ItemFailText
   System_String_o* Dino_BusSand_App_UI_HudPanel__ItemFailText (Dino_BusSand_App_UI_HudPanel_o*
   __this, System_String_o* reason, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HudPanel__ItemFailText_230e598(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c52e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb5898);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cab2b8);
    FUN_02132f7c(PTR_DAT_04cb58b0);
    FUN_02132f7c(PTR_DAT_04cabf00);
    bRam0000000004f9c52e = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uStack_28 = (ulong)(uint)uStack_28;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  lVar7 = 0;
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0240e918;
    lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248
                      (*(long *)(param_1 + 0x40),0);
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248
                            (*(long *)(param_1 + 0x40),0), lVar7 == 0)) goto LAB_0240e918;
      lVar7 = *(long *)(lVar7 + 0x20);
    }
  }
  uVar2 = System_String__op_Equality_46d1108(param_2,*(undefined8 *)PTR_DAT_04cb58b0,0);
  if (((uVar2 & 1) == 0) || (lVar7 == 0)) {
    lVar3 = *(long *)PTR_DAT_04ca9d18;
    lVar7 = *(long *)(lVar3 + 0x38);
    if (lVar7 == 0) {
      FUN_0216b4cc(lVar3);
      lVar7 = *(long *)(lVar3 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
    }
    if ((bRam0000000004f9b81c & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab550,lVar7,0);
      FUN_02132f7c(PTR_DAT_04cac078);
      FUN_02132f7c(PTR_DAT_04ca9c30);
      bRam0000000004f9b81c = 1;
    }
    uStack_28 = 0;
    uVar2 = System_String__IsNullOrEmpty_46d2084(param_2,0);
    puVar1 = PTR_DAT_04cab550;
    if ((uVar2 & 1) != 0) {
      return *(undefined8 *)PTR_DAT_04ca9c30;
    }
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_App_Lang__Current_215f3d0();
    uVar2 = Dino_BusSand_App_Lang__Text_215f904(uVar6,param_2,&uStack_28);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      uVar2 = System_String__op_Equality_46d1108
                        (**(undefined8 **)(lVar3 + 0xb8),*(undefined8 *)PTR_DAT_04cac078,0);
      if ((uVar2 & 1) != 0) {
        return param_2;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_Lang__English_215f81c();
      uVar2 = Dino_BusSand_App_Lang__Text_215f904(uVar6,param_2,&uStack_28);
      if ((uVar2 & 1) == 0) {
        return param_2;
      }
    }
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
      uStack_28 = System_String__Format_46d3570(uStack_28,lVar7,0);
    }
    return uStack_28;
  }
  lVar3 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,6);
  lVar5 = *(long *)PTR_DAT_04ca9d18;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_0216b4cc(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0216b470();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0216b470();
  }
  uVar6 = **(undefined8 **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
  }
  uVar6 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb5898,uVar6,0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = uVar6;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x20),uVar6);
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_04cabf00;
        thunk_FUN_02134474((undefined8 *)(lVar3 + 0x28));
        uStack_28 = CONCAT44(*(undefined4 *)(lVar7 + 0x38),(uint)uStack_28);
        uVar6 = System_Int32__ToString_482d750((long)&uStack_28 + 4,0);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = uVar6;
          thunk_FUN_02134474((undefined8 *)(lVar3 + 0x30),uVar6);
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)PTR_DAT_04cabd10;
            thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38));
            uStack_28 = CONCAT44(8,(uint)uStack_28);
            uVar6 = System_Int32__ToString_482d750((long)&uStack_28 + 4,0);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = uVar6;
              thunk_FUN_02134474((undefined8 *)(lVar3 + 0x40),uVar6);
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)PTR_DAT_04cab2b8;
                thunk_FUN_02134474();
                uVar6 = System_String__Concat_46d31f0(lVar3,0);
                return uVar6;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_0240e918:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

