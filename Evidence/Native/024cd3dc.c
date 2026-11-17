/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnDuneMelted
void Dino_BusSand_View_MechanicLayer__OnDuneMelted (Dino_BusSand_View_MechanicLayer_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnDuneMelted
   void Dino_BusSand_View_MechanicLayer__OnDuneMelted (Dino_BusSand_View_MechanicLayer_o* __this,
   int32_t index, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnDuneMelted_23cd3dc
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long alStack_70 [4];
  
  puVar2 = PTR_DAT_04cbd4c0;
  puVar1 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c9f4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cbd4c8);
    FUN_02132f7c(PTR_DAT_04cbd4d0);
    FUN_02132f7c(PTR_DAT_04cbd4d8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd4e0);
    FUN_02132f7c(PTR_DAT_04cbd4e8);
    FUN_02132f7c(PTR_DAT_04cbd4c0);
    bRam0000000004f9c9f4 = 1;
  }
  alStack_70[1] = 0;
  alStack_70[0] = 0;
  alStack_70[3] = 0;
  alStack_70[2] = 0;
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_View_MechanicLayer___c__DisplayClass127_0___ctor_23d511c(lVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    param_2 = 0;
    Dino_BusSand_GameAudio__Mechanic_2384944(0,**(long **)(lVar4 + 0xb8),6,0);
  }
  if (*(long *)(param_4 + 0x78) != 0) {
    uVar5 = System_Collections_Generic_Dictionary_int__ValueTuple_object__object__object__float____TryGetValue_3416bdc
                      (*(long *)(param_4 + 0x78),param_5,alStack_70,*(undefined8 *)PTR_DAT_04cbd4d8)
    ;
    if ((uVar5 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_4 + 0x78) != 0) &&
       (System_Collections_Generic_Dictionary_int__ValueTuple_object__object__object__float____Remove_3416598
                  (*(long *)(param_4 + 0x78),param_5,*(undefined8 *)PTR_DAT_04cbd4c8), lVar3 != 0))
    {
      plVar7 = (long *)(lVar3 + 0x10);
      *plVar7 = alStack_70[0];
      thunk_FUN_02134474(plVar7);
      puVar1 = PTR_DAT_04ca9ae8;
      lVar4 = *plVar7;
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
      if ((uVar5 & 1) == 0) {
        if (cRam0000000004f9b65e == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
        }
        lVar4 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
        uVar9 = *(undefined4 *)(lVar4 + 0xc);
        param_2 = *(undefined4 *)(lVar4 + 0x10);
        param_3 = *(undefined4 *)(lVar4 + 0x14);
      }
      else {
        if (*plVar7 == 0) goto LAB_024cd818;
        uVar9 = UnityEngine_Transform__get_localScale_43d1b0c(*plVar7,0);
      }
      lVar4 = *(long *)puVar1;
      *(undefined4 *)(lVar3 + 0x18) = uVar9;
      *(undefined4 *)(lVar3 + 0x1c) = param_2;
      uVar8 = *(undefined8 *)(lVar3 + 0x10);
      *(undefined4 *)(lVar3 + 0x20) = param_3;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
      if ((uVar5 & 1) == 0) {
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
        }
        puVar6 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
        uVar9 = *puVar6;
        param_2 = puVar6[1];
        param_3 = puVar6[2];
      }
      else {
        if (*plVar7 == 0) goto LAB_024cd818;
        uVar9 = UnityEngine_Transform__get_position_43d0e48(*plVar7,0);
      }
      lVar4 = alStack_70[2];
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if (alStack_70[2] == 0) goto LAB_024cd818;
        uVar8 = UnityEngine_Component__get_gameObject_43bcde8(alStack_70[2],0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        UnityEngine_Object__Destroy_43c8114(uVar8,0);
      }
      lVar4 = *plVar7;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
      if ((uVar5 & 1) != 0) {
        Dino_BusSand_View_MechanicLayer__DuneBurst_23cf580(uVar9,param_2,param_3,param_4,param_5);
        uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
        System_Action_float____ctor_35f1448(uVar8,lVar3,*(undefined8 *)PTR_DAT_04cbd4e0,0);
        lVar4 = Dino_BusSand_Tween__Value_238bbfc(_UNK_00e2094c,uVar8,0);
        uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar8,lVar3,*(undefined8 *)PTR_DAT_04cbd4e8,0);
        if ((lVar4 == 0) || (lVar3 = Dino_BusSand_Tween__OnDone_238bb74(lVar4,uVar8,0), lVar3 == 0))
        goto LAB_024cd818;
        Dino_BusSand_Tween__SetOwner_238bb58(lVar3,param_4,0);
      }
      if (*(long *)(param_4 + 0x58) != 0) {
        System_Collections_Generic_Dictionary_int__byte___Remove_341d2a4
                  (*(long *)(param_4 + 0x58),param_5,*(undefined8 *)PTR_DAT_04cbd4d0);
        if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Haptics__Play_2388ed8(2,0);
        return;
      }
    }
  }
LAB_024cd818:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

