/* IL2CPP: Dino.BusSand.App.Meta.OfferScheduler$$Count
void Dino_BusSand_App_Meta_OfferScheduler__Count (bool beforeHome, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.OfferScheduler$$Count
   void Dino_BusSand_App_Meta_OfferScheduler__Count (bool beforeHome, const MethodInfo* method); */

void Dino_BusSand_App_Meta_OfferScheduler__Count_220c70c(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd07 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb21b8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd07 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  lVar3 = Dino_BusSand_App_Meta_Profile__Day_2271100(0);
  puVar2 = PTR_DAT_04cb21b8;
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x1b0) == lVar3) {
      iVar6 = *(int *)(lVar7 + 0x1b8) + 1;
    }
    else {
      iVar6 = 1;
      *(long *)(lVar7 + 0x1b0) = lVar3;
      *(undefined4 *)(lVar7 + 0x1b8) = 0;
    }
    lVar4 = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    *(int *)(lVar7 + 0x1b8) = iVar6;
    piVar5 = *(int **)(lVar4 + 0xb8);
    iVar6 = *(int *)(lVar3 + 0xe4);
    *(byte *)(piVar5 + 1) = param_1 & 1;
    *piVar5 = *piVar5 + 1;
    if (iVar6 == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04cabaf8;
    if ((bRam0000000004f9c0ee & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      bRam0000000004f9c0ee = 1;
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x28) = 1;
    fVar8 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c) = fVar8 + 0.5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

