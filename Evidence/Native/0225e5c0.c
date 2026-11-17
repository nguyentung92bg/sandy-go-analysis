/* IL2CPP: Dino.BusSand.App.SpriteSkin$$Apply
void Dino_BusSand_App_SpriteSkin__Apply (UnityEngine_Transform_o* root, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.SpriteSkin$$Apply
   void Dino_BusSand_App_SpriteSkin__Apply (UnityEngine_Transform_o* root, const MethodInfo*
   method); */

void Dino_BusSand_App_SpriteSkin__Apply_215e5c0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b80d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabf68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabf58);
    bRam0000000004f9b80d = 1;
  }
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar4 & 1) == 0) {
    if ((param_1 == 0) ||
       (lVar5 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (param_1,1,*(undefined8 *)PTR_DAT_04cabf68), puVar3 = PTR_DAT_04cabf58,
       lVar5 == 0)) {
LAB_0225e730:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar6 = *(long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_0225e730;
        uVar7 = *(undefined8 *)(lVar6 + 0xd8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(lVar6 + 0xd8) == 0) goto LAB_0225e730;
          uVar7 = UnityEngine_Object__get_name_43c71a4(*(long *)(lVar6 + 0xd8),0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar3);
          }
          uVar4 = Dino_BusSand_App_SpriteSkin__TryGet_215e2dc(uVar7,&uStack_38);
          if ((uVar4 & 1) != 0) {
            UnityEngine_UI_Image__set_sprite_44a7258(lVar6,uStack_38,0);
            UnityEngine_UI_Image__set_preserveAspect_44afae0(lVar6,1,0);
          }
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
  }
  return;
}

