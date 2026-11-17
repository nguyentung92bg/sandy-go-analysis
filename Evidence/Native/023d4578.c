/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Honked
void Dino_BusSand_App_UI_HomeAtelier__Honked (Dino_BusSand_App_UI_HomeAtelier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Honked
   void Dino_BusSand_App_UI_HomeAtelier__Honked (Dino_BusSand_App_UI_HomeAtelier_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__Honked_22d4578(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f9c3db & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6eb0);
    FUN_02132f7c(PTR_DAT_04cb6eb8);
    FUN_02132f7c(PTR_DAT_04cb6ec0);
    FUN_02132f7c(PTR_DAT_04cb6ec8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cb6ed0);
    bRam0000000004f9c3db = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if (*(float *)(param_1 + 0xec) < *(float *)(param_1 + 0x124)) {
    return;
  }
  *(float *)(param_1 + 0x124) = *(float *)(param_1 + 0xec) + _UNK_00e208d0;
  if (*(long *)(param_1 + 0x100) == 0) goto LAB_023d4878;
  Dino_BusSand_App_UI_HomeStage__Honk_22efa38(*(long *)(param_1 + 0x100),0);
  if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Haptics__Play_2388ed8(1,0);
  fVar8 = *(float *)(param_1 + 0x5c);
  if (cRam0000000004f9b891 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b891 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar7 = (double)fVar8;
  dVar6 = (double)FUN_049b52f0(dVar7,&dStack_68);
  if (0.0 <= fVar8) {
    if (dVar6 == 0.5) {
      dVar6 = 1.0;
      goto LAB_023d46d4;
    }
    dVar7 = (double)(long)(dVar7 + 0.5);
  }
  else if (dVar6 == -0.5) {
    dVar6 = -1.0;
LAB_023d46d4:
    dVar7 = dStack_68;
    if (((long)dStack_68 & 1U) != 0) {
      dVar7 = dStack_68 + dVar6;
    }
  }
  else {
    dVar7 = (double)(long)(dVar7 + -0.5);
  }
  iVar1 = -0x80000000;
  if (dVar7 != INFINITY) {
    iVar1 = (int)dVar7;
  }
  lVar3 = Dino_BusSand_App_UI_HomeAtelier__Find_22d75bc(param_1,iVar1);
  if (lVar3 != 0) {
    *(float *)(lVar3 + 0x74) = *(float *)(lVar3 + 0x74) + _UNK_00e2009c;
    *(float *)(lVar3 + 0x7c) = *(float *)(lVar3 + 0x7c) + 14.0;
  }
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (lVar4 = System_Collections_Generic_Dictionary_int__object___get_Values_3437130
                        (*(long *)(param_1 + 0x78),*(undefined8 *)PTR_DAT_04cb6eb0), lVar4 != 0)) {
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_30a9274
              (&uStack_58,lVar4,*(undefined8 *)PTR_DAT_04cb6ed0);
    puVar2 = PTR_DAT_04cb6ec0;
    fVar8 = _UNK_00e1fea8;
    dStack_68 = 0.0;
    puStack_60 = &uStack_58;
    while (uVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3632698
                             (&uStack_58,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
      if (lStack_48 != lVar3) {
        if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(float *)(lStack_48 + 0x74) = *(float *)(lStack_48 + 0x74) + fVar8;
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
              (&uStack_58,*(undefined8 *)PTR_DAT_04cb6eb8);
    puVar2 = PTR_DAT_04cad568;
    if (*(long *)(param_1 + 0x38) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x38) + 0xec) = 0x40800000;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      if (**(long **)(lVar3 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Paper_2385674
                  (_UNK_00e2094c,_UNK_00e200fc,**(long **)(lVar3 + 0xb8),0);
      }
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xec);
      return;
    }
  }
LAB_023d4878:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

