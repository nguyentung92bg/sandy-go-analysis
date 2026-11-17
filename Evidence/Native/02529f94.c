/* IL2CPP: Dino.BusSand.Core.StageEngine$$AnyEmitterCanEmit
bool Dino_BusSand_Core_StageEngine__AnyEmitterCanEmit (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$AnyEmitterCanEmit
   bool Dino_BusSand_Core_StageEngine__AnyEmitterCanEmit (Dino_BusSand_Core_StageEngine_o* __this,
   const MethodInfo* method); */

undefined8 Dino_BusSand_Core_StageEngine__AnyEmitterCanEmit_2429f94(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  
  if ((bRam0000000004f9cbb9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd048);
    FUN_02132f7c(PTR_DAT_04cbc300);
    FUN_02132f7c(PTR_DAT_04cbc470);
    FUN_02132f7c(PTR_DAT_04cbc308);
    FUN_02132f7c(PTR_DAT_04cbc480);
    FUN_02132f7c(PTR_DAT_04cbd050);
    FUN_02132f7c(PTR_DAT_04cbc318);
    FUN_02132f7c(PTR_DAT_04cbc488);
    FUN_02132f7c(PTR_DAT_04cbd058);
    FUN_02132f7c(PTR_DAT_04cbc368);
    FUN_02132f7c(PTR_DAT_04cbd060);
    FUN_02132f7c(PTR_DAT_04cbc4a0);
    bRam0000000004f9cbb9 = 1;
  }
  puVar4 = PTR_DAT_04cbd060;
  puVar3 = PTR_DAT_04cbd050;
  puVar2 = PTR_DAT_04cbc308;
  puVar1 = PTR_DAT_04cbc300;
  uStack_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  lStack_40 = 0;
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_78 = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_0252a214:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_a0,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cbc368);
  lStack_40 = lStack_90;
  puStack_48 = puStack_98;
  uStack_50 = uStack_a0;
  uStack_a0 = 0;
  puStack_98 = &uStack_50;
  do {
    uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_50,*(undefined8 *)puVar2);
    if ((uVar5 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_50,*(undefined8 *)puVar1);
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_0252a214;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_a0,*(long *)(param_1 + 0x38),*(undefined8 *)puVar4);
      lStack_60 = lStack_90;
      puStack_68 = puStack_98;
      uStack_70 = uStack_a0;
      uStack_a0 = 0;
      puStack_98 = &uStack_70;
      goto LAB_0252a120;
    }
    if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = Dino_BusSand_Core_Garage__CanEmit_242a31c(lStack_40,*(undefined8 *)(param_1 + 0x28));
  } while ((uVar5 & 1) == 0);
  uVar7 = *(undefined8 *)puVar1;
  puVar6 = &uStack_50;
LAB_0252a1d0:
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594(puVar6,uVar7);
  return 1;
LAB_0252a120:
  uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                    (&uStack_70,*(undefined8 *)puVar3);
  if ((uVar5 & 1) != 0) goto code_r0x0252a130;
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_70,*(undefined8 *)PTR_DAT_04cbd048);
  if (*(long *)(param_1 + 0x40) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_88,*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cbc4a0);
    puVar1 = PTR_DAT_04cbc480;
    uStack_a0 = 0;
    puStack_98 = &uStack_88;
    do {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_88,*(undefined8 *)puVar1);
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_88,*(undefined8 *)PTR_DAT_04cbc470);
        return 0;
      }
      if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar5 = Dino_BusSand_Core_Lane__CanEmit_242fbbc(lStack_78,*(undefined8 *)(param_1 + 0x28),0);
    } while ((uVar5 & 1) == 0);
    puVar6 = &uStack_88;
    puVar8 = (undefined8 *)PTR_DAT_04cbc470;
    goto LAB_0252a1cc;
  }
  goto LAB_0252a214;
code_r0x0252a130:
  if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar5 = Dino_BusSand_Core_Lift__CanEmit_242e6b0(lStack_60,*(undefined8 *)(param_1 + 0x28),0);
  if ((uVar5 & 1) != 0) goto code_r0x0252a148;
  goto LAB_0252a120;
code_r0x0252a148:
  puVar6 = &uStack_70;
  puVar8 = (undefined8 *)PTR_DAT_04cbd048;
LAB_0252a1cc:
  uVar7 = *puVar8;
  goto LAB_0252a1d0;
}

