/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnLiftSpent
void Dino_BusSand_View_MechanicLayer__OnLiftSpent (Dino_BusSand_View_MechanicLayer_o* __this, int32_t liftId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnLiftSpent
   void Dino_BusSand_View_MechanicLayer__OnLiftSpent (Dino_BusSand_View_MechanicLayer_o* __this,
   int32_t liftId, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnLiftSpent_23cc690
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uStack_40;
  long *plStack_38;
  
  puVar1 = PTR_DAT_04cbd440;
  if ((bRam0000000004f9c9f0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cbd448);
    FUN_02132f7c(PTR_DAT_04cbd450);
    FUN_02132f7c(PTR_DAT_04cbd410);
    FUN_02132f7c(PTR_DAT_04cbd458);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd460);
    FUN_02132f7c(PTR_DAT_04cbd440);
    FUN_02132f7c(PTR_DAT_04cbd468);
    FUN_02132f7c(PTR_DAT_04cbd470);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c9f0 = 1;
  }
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_View_MechanicLayer___c__DisplayClass123_0___ctor_23d4b08(lVar2,0);
  if (*(long *)(param_4 + 0x90) != 0) {
    uVar3 = System_Collections_Generic_Dictionary_int__ValueTuple_object__object____TryGetValue_3408188
                      (*(long *)(param_4 + 0x90),param_5,&uStack_40,*(undefined8 *)PTR_DAT_04cbd410)
    ;
    puVar1 = PTR_DAT_04cad568;
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
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
      Dino_BusSand_GameAudio__Mechanic_2384944(0,**(long **)(lVar4 + 0xb8),0xd,0);
    }
    plVar6 = plStack_38;
    puVar1 = PTR_DAT_04ca9ae8;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(plVar6,0,0);
    if ((uVar3 & 1) != 0) {
      if (plStack_38 == (long *)0x0) goto LAB_024cc9e4;
      (**(code **)(*plStack_38 + 0x518))
                (plStack_38,*(undefined8 *)PTR_DAT_04ca9c30,*(undefined8 *)(*plStack_38 + 0x520));
    }
    if ((lVar2 != 0) && (*(long *)(param_4 + 0x98) != 0)) {
      uVar3 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                        (*(long *)(param_4 + 0x98),param_5,lVar2 + 0x10,
                         *(undefined8 *)PTR_DAT_04cbd458);
      if ((uVar3 & 1) != 0) {
        uVar5 = *(undefined8 *)(lVar2 + 0x10);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
        if ((uVar3 & 1) != 0) {
          lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbd470);
          Dino_BusSand_View_MechanicLayer___c__DisplayClass123_1___ctor_23d4ba4(lVar4,0);
          if (lVar4 == 0) goto LAB_024cc9e4;
          plVar6 = (long *)(lVar4 + 0x20);
          *plVar6 = lVar2;
          thunk_FUN_02134474(plVar6,lVar2);
          if ((*plVar6 == 0) || (lVar2 = *(long *)(*plVar6 + 0x10), lVar2 == 0)) goto LAB_024cc9e4;
          uVar8 = UnityEngine_Transform__get_localScale_43d1b0c(lVar2,0);
          puVar1 = PTR_DAT_04cac208;
          *(undefined4 *)(lVar4 + 0x10) = uVar8;
          *(undefined4 *)(lVar4 + 0x14) = param_2;
          *(undefined4 *)(lVar4 + 0x18) = param_3;
          uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
          System_Action_float____ctor_35f1448(uVar5,lVar4,*(undefined8 *)PTR_DAT_04cbd468,0);
          lVar2 = Dino_BusSand_Tween__Value_238bbfc(0x3e800000,uVar5,0);
          uVar7 = *(undefined8 *)(lVar4 + 0x20);
          uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar5,uVar7,*(undefined8 *)PTR_DAT_04cbd460,0);
          if ((lVar2 == 0) ||
             (lVar2 = Dino_BusSand_Tween__OnDone_238bb74(lVar2,uVar5,0), lVar2 == 0))
          goto LAB_024cc9e4;
          Dino_BusSand_Tween__SetOwner_238bb58(lVar2,param_4,0);
        }
      }
      if (*(long *)(param_4 + 0x98) != 0) {
        System_Collections_Generic_Dictionary_int__object___Remove_34387d4
                  (*(long *)(param_4 + 0x98),param_5,*(undefined8 *)PTR_DAT_04cbd448);
        if (*(long *)(param_4 + 0x90) != 0) {
          System_Collections_Generic_Dictionary_int__ValueTuple_object__object____Remove_3407bd8
                    (*(long *)(param_4 + 0x90),param_5,*(undefined8 *)PTR_DAT_04cbd450);
          return;
        }
      }
    }
  }
LAB_024cc9e4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

